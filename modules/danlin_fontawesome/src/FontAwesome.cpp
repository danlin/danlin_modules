/*
  ==============================================================================

    FontAwesome.cpp
    Created: 13 Jul 2014 12:45:27pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "FontAwesome.h"

Typeface::Ptr FontAwesome_ptr = Typeface::createSystemTypefaceFor(FontAwesomeData::fontawesomewebfont_ttf, FontAwesomeData::fontawesomewebfont_ttfSize);
Font FontAwesome() {
    Font fontAwesomeFont(FontAwesome_ptr);
    return fontAwesomeFont;
}

Font getFontAwesome(float height) {
    Font fontAwesomeFont = FontAwesome();
    fontAwesomeFont.setHeight(height);
    return fontAwesomeFont;
}

void DrawIcon(Graphics& g, int x, int y, float height, String icon) {
    g.setFont(getFontAwesome(height));
    g.drawText (icon, (int) x, (int) y, (int) height, (int) height, Justification::centred, true);
}
