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
    int scaledSize = size * getScale();
    String identifier = juce::String(icon + "@" + String(scaledSize) + "@" + colour.toString());
    int64 hash = identifier.hashCode64();
    Image canvas = juce::ImageCache::getFromHashCode(hash);
    if (canvas.isValid())
        return canvas;

    canvas = Image(Image::PixelFormat::ARGB, scaledSize, scaledSize, true);
    Graphics g(canvas);
    g.setColour(colour);
    g.setFont(getFont(scaledSize));
    g.drawText(icon, 0, 0, scaledSize, scaledSize, Justification::centred, true);
    juce::ImageCache::addImageToCache(canvas, hash);
    return canvas;
}

RenderedIcon FontAwesome::getRotatedIcon(Icon icon, float size, juce::Colour colour, float iconRotation) {
    int scaledSize = size * getScale();
    String identifier = String(icon + "@" + String(scaledSize) + "@" + colour.toString() + "@" + String(iconRotation) + "@");
    int64 hash = identifier.hashCode64();
    Image canvas = juce::ImageCache::getFromHashCode(hash);
    if (canvas.isValid())
        return canvas;

    canvas = Image(Image::PixelFormat::ARGB, scaledSize, scaledSize, true);
    Graphics g(canvas);
    g.drawImageTransformed(getIcon(icon, size, colour), AffineTransform::rotation(-(float_Pi * iconRotation), scaledSize * 0.5f, scaledSize * 0.5f));
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
