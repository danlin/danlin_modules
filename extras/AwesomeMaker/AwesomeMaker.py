import re
import urllib

regex_icon_description = re.compile(ur'(.fa-[^{]+:before ){([^}]+)}$', re.MULTILINE)
regex_icon_name = re.compile(ur'fa-(.+):before.+', re.MULTILINE)
regex_icon_unicode = re.compile(ur'.+content: "\\(.+)";', re.MULTILINE)


def get_icon_names(icon_description):
    return re.findall(regex_icon_name, icon_description[0])


def get_icon_unicode(icon_description):
    return re.findall(regex_icon_unicode, icon_description[1])


def parse(css_content, output_file):
    match = re.findall(regex_icon_description, css_content)
    for icon_description in match:
        icon_names = get_icon_names(icon_description)
        icon_unicode = get_icon_unicode(icon_description)
        for icon_name in icon_names:
            write_icon_description(icon_name, icon_unicode[0], output_file)


def camel_case(string):
    result = ""
    words = string.split("-")
    for word in words:
        result += word.capitalize()
    return result


def write_file_header(output_file):
    output_file.write("// IMPORTANT! This file is auto-generated see extras/AwesomeMaker\r\n\r\n")
    output_file.write("#ifudef __FONTAWESOME_ICONS_H__\r\n")
    output_file.write("#define __FONTAWESOME_ICONS_H__\r\n\r\n")
    output_file.write("typedef juce::String Icon;\r\n\r\n")


def write_file_footer(output_file):
    output_file.write("\r\n#endif // __FONTAWESOME_ICONS_H__\r\n")


def write_icon_description(icon_name, icon_unicode, output_file):
    output_file.write(
        "const Icon FontAwesome_" + camel_case(icon_name) + " = Icon::fromUTF8(u8\"\\u" + icon_unicode + "\");\r\n")


css = urllib.urlopen("https://raw.githubusercontent.com/FortAwesome/Font-Awesome/master/css/font-awesome.css").read()
if css == "":
    exit()

header_file = open("Icons.h", "w")
write_file_header(header_file)
parse(css, header_file)
write_file_footer(header_file)
header_file.close()
