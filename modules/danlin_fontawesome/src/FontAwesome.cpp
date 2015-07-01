/*
  ==============================================================================

    FontAwesome.cpp
    Created: 13 Jul 2014 12:45:27pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "FontAwesome.h"

juce_ImplementSingleton(FontAwesome)

RenderedIcon FontAwesome::getIcon(Icon icon, float size, juce::Colour colour) {
    int scaledSize = std::abs(size * getScale());
    
    String identifier = juce::String(icon + "@" + String(scaledSize) + "@" + colour.toString());
    int64 hash = identifier.hashCode64();
    Image canvas = juce::ImageCache::getFromHashCode(hash);
    if (canvas.isValid())
        return canvas;

    Font fontAwesome = getFont(scaledSize);
    scaledSize = fontAwesome.getStringWidth(icon);
    
    canvas = Image(Image::PixelFormat::ARGB, scaledSize, scaledSize, true);
    Graphics g(canvas);
    g.setColour(colour);
    g.setFont(fontAwesome);
    g.drawText(icon, 0, 0, scaledSize, scaledSize, Justification::centred, true);
    juce::ImageCache::addImageToCache(canvas, hash);
    return canvas;
}

RenderedIcon FontAwesome::getRotatedIcon(Icon icon, float size, juce::Colour colour, float iconRotation) {
    int scaledSize = std::abs(size * getScale());
    String identifier = String(icon + "@" + String(scaledSize) + "@" + colour.toString() + "@" + String(iconRotation) + "@");
    int64 hash = identifier.hashCode64();
    Image canvas = juce::ImageCache::getFromHashCode(hash);
    if (canvas.isValid())
        return canvas;

    RenderedIcon renderdIcon = getIcon(icon, size, colour);
    canvas = Image(Image::PixelFormat::ARGB, renderdIcon.getWidth(), renderdIcon.getHeight(), true);
    Graphics g(canvas);
    g.drawImageTransformed(renderdIcon, AffineTransform::rotation(-(float_Pi * iconRotation), renderdIcon.getWidth() * 0.5f, renderdIcon.getHeight() * 0.5f));
    juce::ImageCache::addImageToCache(canvas, hash);
    return canvas;
}

void FontAwesome::drawAt(juce::Graphics &g, RenderedIcon icon, int x, int y) {
    int w = icon.getWidth();
    int h = icon.getHeight();
    g.drawImage(icon,
                x, y,
                w/getScale(), h/getScale(),
                0, 0,
                w, h,
                false);
}

float FontAwesome::getScale() {
    // TODO: is there a way to get the current display scale?
    const Desktop::Displays::Display& dis = Desktop::getInstance().getDisplays().getMainDisplay();
    return (int)dis.scale;
}

juce::Font FontAwesome::getFont() {
    static Font fontAwesomeFont(FontAwesome_ptr);
    return fontAwesomeFont;
}

juce::Font FontAwesome::getFont(float size) {
    juce::Font font = getFont();
    font.setHeight(size);
    return font;
}
