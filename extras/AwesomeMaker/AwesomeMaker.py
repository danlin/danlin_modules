#!/usr/bin/python

import re
import urllib

endl = "\n"

regex_icon_description = re.compile(ur'(.fa-[^{]+:before ){([^}]+)}$', re.MULTILINE)
regex_icon_name = re.compile(ur'fa-(.+):before.+', re.MULTILINE)
regex_icon_unicode = re.compile(ur'.+content: "\\(.+)";', re.MULTILINE)


def get_icon_names(icon_description):
    return re.findall(regex_icon_name, icon_description[0])


def get_icon_unicode(icon_description):
    return re.findall(regex_icon_unicode, icon_description[1])


def parse_css(css_content, output_file):
    match = re.findall(regex_icon_description, css_content)
    for icon_description in match:
        icon_names = get_icon_names(icon_description)
        icon_unicode = get_icon_unicode(icon_description)
        for icon_name in icon_names:
            write_icon_description(icon_name, icon_unicode[0], output_file)


def camel_case_string(string):
    result = ""
    words = string.split("-")
    for word in words:
        result += word.capitalize()
    return result


def write_icon_file_header(output_file):
    output_file.write("// IMPORTANT! This file is auto-generated see extras/AwesomeMaker" + endl)
    output_file.write(endl)
    output_file.write("#ifndef __FONTAWESOME_ICONS_H__" + endl)
    output_file.write("#define __FONTAWESOME_ICONS_H__" + endl)
    output_file.write("typedef juce::String Icon;" + endl)
    output_file.write(endl)


def write_icon_file_footer(output_file):
    output_file.write(endl)
    output_file.write("#endif // __FONTAWESOME_ICONS_H__" + endl)
    output_file.write(endl)


def write_icon_description(icon_name, icon_unicode, output_file):
    output_file.write("const Icon FontAwesome_" + camel_case_string(icon_name) + " = Icon::fromUTF8(u8\"\\u" + icon_unicode + "\");" + endl)


def write_font_file_header(font, output_file):
    output_file.write("// IMPORTANT! This file is auto-generated see extras/AwesomeMaker" + endl)
    output_file.write(endl)
    output_file.write("#ifndef __FONTAWESOME_DATA_H__" + endl)
    output_file.write("#define __FONTAWESOME_DATA_H__" + endl)
    output_file.write(endl)
    output_file.write("namespace FontAwesomeData {" + endl)
    output_file.write("\textern const char*\tfontawesomewebfont_ttf;" + endl)
    output_file.write("\tconst int\t\t\tfontawesomewebfont_ttfSize = " + str(len(font)) + ";" + endl)
    output_file.write("}" + endl)
    output_file.write(endl)
    output_file.write("#endif" + endl)
    output_file.write(endl)

def write_font_file_source(font, output_file):
    output_file.write("// IMPORTANT! This file is auto-generated see extras/AwesomeMaker" + endl)
    output_file.write("#include \"FontAwesomeData.h\"" + endl)
    output_file.write(endl)
    output_file.write("static const unsigned char data[] = {")
    count = 0
    size = len(font)
    for byte in font:
        count += 1
        size -= 1
        if (count % 40) != 39:
            output_file.write(str(ord(byte)))
        else:
            output_file.write(str(ord(byte))  + endl)
        if size > 0:
            output_file.write(",")
    output_file.write(";" + endl)
    output_file.write("const char* FontAwesomeData::fontawesomewebfont_ttf = (const char*) data;" + endl)
    output_file.write(endl)

css = urllib.urlopen("https://raw.githubusercontent.com/FortAwesome/Font-Awesome/master/css/font-awesome.css").read()
if css == "":
    exit()

font = urllib.urlopen("https://github.com/FortAwesome/Font-Awesome/raw/master/fonts/fontawesome-webfont.ttf").read()
if font == "":
    exit()

icon_file = open("Icons.h", "wt")
write_icon_file_header(icon_file)
parse_css(css, icon_file)
write_icon_file_footer(icon_file)
icon_file.close()

font_file_header = open("FontAwesomeData.h", "wt")
font_file_source = open("FontAwesomeData.cpp", "wt")
write_font_file_header(font, font_file_header)
write_font_file_source(font, font_file_source)