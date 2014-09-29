/*
  ==============================================================================

    FontAwesome.cpp
    Created: 13 Jul 2014 12:45:27pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "FontAwesome.h"

Font FontAwesome() {
    Typeface::Ptr ptr = Typeface::createSystemTypefaceFor(FontAwesomeData::fontawesomewebfont_ttf, FontAwesomeData::fontawesomewebfont_ttfSize);
    Font fontAwesomeFont(ptr);
    ptr = nullptr;
    return fontAwesomeFont;
}

Font getFontAwesome(float height) {
    Font fontAwesomeFont = FontAwesome();
    fontAwesomeFont.setHeight(height);
    return fontAwesomeFont;
}

void DrawIcon(Graphics& g, int x, int y, float with, String icon) {
    g.setFont(getFontAwesome(with));
    g.drawText (icon, (int) x, (int) y, (int) with, (int) with, Justification::centred, true);
}
