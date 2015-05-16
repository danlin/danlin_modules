/*
  ==============================================================================

    FontAwesome.cpp
    Created: 13 Jul 2014 12:45:27pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "FontAwesome.h"

Font getFontAwesome(float height) {
    return FontAwesome.getFont(height);
}

RenderedIcon FontAwesomeHelper::getIcon(Icon icon, int size, juce::Colour colour) {
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

RenderedIcon FontAwesomeHelper::getRotatedIcon(Icon icon, int size, juce::Colour colour, float iconRotation) {
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

void FontAwesomeHelper::drawAt(juce::Graphics &g, RenderedIcon icon, int x, int y) {
    int w = icon.getWidth();
    int h = icon.getHeight();
    g.drawImage(icon,
                x, y,
                w/getScale(), h/getScale(),
                0, 0,
                w, h,
                false);
}

float FontAwesomeHelper::getScale() {
    const Desktop::Displays::Display& dis = Desktop::getInstance().getDisplays().getMainDisplay();
    return (int)dis.scale;
}

juce::Font FontAwesomeHelper::getFont() {
#if JUCE_LINUX
    static Font fontAwesomeFont("FontAwesome", 32, Font::plain);
#else
    static Font fontAwesomeFont(FontAwesome_ptr);
#endif
    return fontAwesomeFont;
}

juce::Font FontAwesomeHelper::getFont(float size) {
    juce::Font font = getFont();
    font.setHeight(size);
    return font;
}

FontAwesomeHelper FontAwesome;
