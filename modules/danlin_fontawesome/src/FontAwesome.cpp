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

Image FontAwesomeHelper::getIcon(Icon icon, int size, juce::Colour colour) {
    int64 hash = juce::String(icon + "@" + String(size) + "@" + colour.toString()).hashCode();
    Image canvas = juce::ImageCache::getFromHashCode(hash);
    if (canvas.isValid())
        return canvas;

    canvas = Image(Image::PixelFormat::ARGB, size, size, true);
    Graphics g(canvas);
    g.setColour(colour);
    g.setFont(getFont(size));
    g.drawText(icon, 0, 0, size, size, Justification::centred, true);
    juce::ImageCache::addImageToCache(canvas, hash);
    return canvas;
}

Image FontAwesomeHelper::getRotatedIcon(Icon icon, int size, juce::Colour colour, float iconRotation) {
    int64 hash = String(icon + "@" + String(size) + "@" + colour.toString() + "@" + String(iconRotation)).hashCode();
    Image canvas = juce::ImageCache::getFromHashCode(hash);
    if (canvas.isValid())
        return canvas;

    canvas = Image(Image::PixelFormat::ARGB, size, size, true);
    Graphics g(canvas);
    g.drawImageTransformed(getIcon(icon, size, colour), AffineTransform::rotation(-(float_Pi * iconRotation), size * 0.5f, size * 0.5f));
    juce::ImageCache::addImageToCache(canvas, hash);
    return canvas;
}

juce::Font FontAwesomeHelper::getFont() {
    static Font fontAwesomeFont(FontAwesome_ptr);
    return fontAwesomeFont;
}

juce::Font FontAwesomeHelper::getFont(float size) {
    juce::Font font = getFont();
    font.setHeight(size);
    return font;
}

FontAwesomeHelper FontAwesome;