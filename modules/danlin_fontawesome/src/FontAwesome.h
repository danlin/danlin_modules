/*
  ==============================================================================

    FontAwesome.h
    Created: 13 Jul 2014 12:19:09pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#ifndef FONTAWESOME_H_INCLUDED
#define FONTAWESOME_H_INCLUDED

#include "JuceHeader.h"

juce::Font getFontAwesome(float height);

#define FA_ADJUST CharPointer_UTF8("\xef\x81\x82")
#define FA_ADN CharPointer_UTF8("\xef\x85\xb0")
#define FA_ALIGN_CENTER CharPointer_UTF8("\xef\x80\xb7")
#define FA_ALIGN_JUSTIFY CharPointer_UTF8("\xef\x80\xb9")
#define FA_ALIGN_LEFT CharPointer_UTF8("\xef\x80\xb6")
#define FA_ALIGN_RIGHT CharPointer_UTF8("\xef\x80\xb8")
#define FA_AMBULANCE CharPointer_UTF8("\xef\x83\xb9")
#define FA_ANCHOR CharPointer_UTF8("\xef\x84\xbd")
#define FA_ANDROID CharPointer_UTF8("\xef\x85\xbb")
#define FA_ANGLE_DOUBLE_DOWN CharPointer_UTF8("\xef\x84\x83")
#define FA_ANGLE_DOUBLE_LEFT CharPointer_UTF8("\xef\x84\x80")
#define FA_ANGLE_DOUBLE_RIGHT CharPointer_UTF8("\xef\x84\x81")
#define FA_ANGLE_DOUBLE_UP CharPointer_UTF8("\xef\x84\x82")
#define FA_ANGLE_DOWN CharPointer_UTF8("\xef\x84\x87")
#define FA_ANGLE_LEFT CharPointer_UTF8("\xef\x84\x84")
#define FA_ANGLE_RIGHT CharPointer_UTF8("\xef\x84\x85")
#define FA_ANGLE_UP CharPointer_UTF8("\xef\x84\x86")
#define FA_APPLE CharPointer_UTF8("\xef\x85\xb9")
#define FA_ARCHIVE CharPointer_UTF8("\xef\x86\x87")
#define FA_ARROW_CIRCLE_DOWN CharPointer_UTF8("\xef\x82\xab")
#define FA_ARROW_CIRCLE_LEFT CharPointer_UTF8("\xef\x82\xa8")
#define FA_ARROW_CIRCLE_O_DOWN CharPointer_UTF8("\xef\x80\x9a")
#define FA_ARROW_CIRCLE_O_LEFT CharPointer_UTF8("\xef\x86\x90")
#define FA_ARROW_CIRCLE_O_RIGHT CharPointer_UTF8("\xef\x86\x8e")
#define FA_ARROW_CIRCLE_O_UP CharPointer_UTF8("\xef\x80\x9b")
#define FA_ARROW_CIRCLE_RIGHT CharPointer_UTF8("\xef\x82\xa9")
#define FA_ARROW_CIRCLE_UP CharPointer_UTF8("\xef\x82\xaa")
#define FA_ARROW_DOWN CharPointer_UTF8("\xef\x81\xa3")
#define FA_ARROW_LEFT CharPointer_UTF8("\xef\x81\xa0")
#define FA_ARROW_RIGHT CharPointer_UTF8("\xef\x81\xa1")
#define FA_ARROW_UP CharPointer_UTF8("\xef\x81\xa2")
#define FA_ARROWS CharPointer_UTF8("\xef\x81\x87")
#define FA_ARROWS_ALT CharPointer_UTF8("\xef\x82\xb2")
#define FA_ARROWS_H CharPointer_UTF8("\xef\x81\xbe")
#define FA_ARROWS_V CharPointer_UTF8("\xef\x81\xbd")
#define FA_ASTERISK CharPointer_UTF8("\xef\x81\xa9")
#define FA_AUTOMOBILE CharPointer_UTF8("\xef\x86\xb9")
#define FA_BACKWARD CharPointer_UTF8("\xef\x81\x8a")
#define FA_BAN CharPointer_UTF8("\xef\x81\x9e")
#define FA_BANK CharPointer_UTF8("\xef\x86\x9c")
#define FA_BAR_CHART_O CharPointer_UTF8("\xef\x82\x80")
#define FA_BARCODE CharPointer_UTF8("\xef\x80\xaa")
#define FA_BARS CharPointer_UTF8("\xef\x83\x89")
#define FA_BEER CharPointer_UTF8("\xef\x83\xbc")
#define FA_BEHANCE CharPointer_UTF8("\xef\x86\xb4")
#define FA_BEHANCE_SQUARE CharPointer_UTF8("\xef\x86\xb5")
#define FA_BELL CharPointer_UTF8("\xef\x83\xb3")
#define FA_BELL_O CharPointer_UTF8("\xef\x82\xa2")
#define FA_BITBUCKET CharPointer_UTF8("\xef\x85\xb1")
#define FA_BITBUCKET_SQUARE CharPointer_UTF8("\xef\x85\xb2")
#define FA_BITCOIN CharPointer_UTF8("\xef\x85\x9a")
#define FA_BOLD CharPointer_UTF8("\xef\x80\xb2")
#define FA_BOLT CharPointer_UTF8("\xef\x83\xa7")
#define FA_BOMB CharPointer_UTF8("\xef\x87\xa2")
#define FA_BOOK CharPointer_UTF8("\xef\x80\xad")
#define FA_BOOKMARK CharPointer_UTF8("\xef\x80\xae")
#define FA_BOOKMARK_O CharPointer_UTF8("\xef\x82\x97")
#define FA_BRIEFCASE CharPointer_UTF8("\xef\x82\xb1")
#define FA_BTC CharPointer_UTF8("\xef\x85\x9a")
#define FA_BUG CharPointer_UTF8("\xef\x86\x88")
#define FA_BUILDING CharPointer_UTF8("\xef\x86\xad")
#define FA_BUILDING_O CharPointer_UTF8("\xef\x83\xb7")
#define FA_BULLHORN CharPointer_UTF8("\xef\x82\xa1")
#define FA_BULLSEYE CharPointer_UTF8("\xef\x85\x80")
#define FA_CAB CharPointer_UTF8("\xef\x86\xba")
#define FA_CALENDAR CharPointer_UTF8("\xef\x81\xb3")
#define FA_CALENDAR_O CharPointer_UTF8("\xef\x84\xb3")
#define FA_CAMERA CharPointer_UTF8("\xef\x80\xb0")
#define FA_CAMERA_RETRO CharPointer_UTF8("\xef\x82\x83")
#define FA_CAR CharPointer_UTF8("\xef\x86\xb9")
#define FA_CARET_DOWN CharPointer_UTF8("\xef\x83\x97")
#define FA_CARET_LEFT CharPointer_UTF8("\xef\x83\x99")
#define FA_CARET_RIGHT CharPointer_UTF8("\xef\x83\x9a")
#define FA_CARET_SQUARE_O_DOWN CharPointer_UTF8("\xef\x85\x90")
#define FA_CARET_SQUARE_O_LEFT CharPointer_UTF8("\xef\x86\x91")
#define FA_CARET_SQUARE_O_RIGHT CharPointer_UTF8("\xef\x85\x92")
#define FA_CARET_SQUARE_O_UP CharPointer_UTF8("\xef\x85\x91")
#define FA_CARET_UP CharPointer_UTF8("\xef\x83\x98")
#define FA_CERTIFICATE CharPointer_UTF8("\xef\x82\xa3")
#define FA_CHAIN CharPointer_UTF8("\xef\x83\x81")
#define FA_CHAIN_BROKEN CharPointer_UTF8("\xef\x84\xa7")
#define FA_CHECK CharPointer_UTF8("\xef\x80\x8c")
#define FA_CHECK_CIRCLE CharPointer_UTF8("\xef\x81\x98")
#define FA_CHECK_CIRCLE_O CharPointer_UTF8("\xef\x81\x9d")
#define FA_CHECK_SQUARE CharPointer_UTF8("\xef\x85\x8a")
#define FA_CHECK_SQUARE_O CharPointer_UTF8("\xef\x81\x86")
#define FA_CHEVRON_CIRCLE_DOWN CharPointer_UTF8("\xef\x84\xba")
#define FA_CHEVRON_CIRCLE_LEFT CharPointer_UTF8("\xef\x84\xb7")
#define FA_CHEVRON_CIRCLE_RIGHT CharPointer_UTF8("\xef\x84\xb8")
#define FA_CHEVRON_CIRCLE_UP CharPointer_UTF8("\xef\x84\xb9")
#define FA_CHEVRON_DOWN CharPointer_UTF8("\xef\x81\xb8")
#define FA_CHEVRON_LEFT CharPointer_UTF8("\xef\x81\x93")
#define FA_CHEVRON_RIGHT CharPointer_UTF8("\xef\x81\x94")
#define FA_CHEVRON_UP CharPointer_UTF8("\xef\x81\xb7")
#define FA_CHILD CharPointer_UTF8("\xef\x86\xae")
#define FA_CIRCLE CharPointer_UTF8("\xef\x84\x91")
#define FA_CIRCLE_O CharPointer_UTF8("\xef\x84\x8c")
#define FA_CIRCLE_O_NOTCH CharPointer_UTF8("\xef\x87\x8e")
#define FA_CIRCLE_THIN CharPointer_UTF8("\xef\x87\x9b")
#define FA_CLIPBOARD CharPointer_UTF8("\xef\x83\xaa")
#define FA_CLOCK_O CharPointer_UTF8("\xef\x80\x97")
#define FA_CLOUD CharPointer_UTF8("\xef\x83\x82")
#define FA_CLOUD_DOWNLOAD CharPointer_UTF8("\xef\x83\xad")
#define FA_CLOUD_UPLOAD CharPointer_UTF8("\xef\x83\xae")
#define FA_CNY CharPointer_UTF8("\xef\x85\x97")
#define FA_CODE CharPointer_UTF8("\xef\x84\xa1")
#define FA_CODE_FORK CharPointer_UTF8("\xef\x84\xa6")
#define FA_CODEPEN CharPointer_UTF8("\xef\x87\x8b")
#define FA_COFFEE CharPointer_UTF8("\xef\x83\xb4")
#define FA_COG CharPointer_UTF8("\xef\x80\x93")
#define FA_COGS CharPointer_UTF8("\xef\x82\x85")
#define FA_COLUMNS CharPointer_UTF8("\xef\x83\x9b")
#define FA_COMMENT CharPointer_UTF8("\xef\x81\xb5")
#define FA_COMMENT_O CharPointer_UTF8("\xef\x83\xa5")
#define FA_COMMENTS CharPointer_UTF8("\xef\x82\x86")
#define FA_COMMENTS_O CharPointer_UTF8("\xef\x83\xa6")
#define FA_COMPASS CharPointer_UTF8("\xef\x85\x8e")
#define FA_COMPRESS CharPointer_UTF8("\xef\x81\xa6")
#define FA_COPY CharPointer_UTF8("\xef\x83\x85")
#define FA_CREDIT_CARD CharPointer_UTF8("\xef\x82\x9d")
#define FA_CROP CharPointer_UTF8("\xef\x84\xa5")
#define FA_CROSSHAIRS CharPointer_UTF8("\xef\x81\x9b")
#define FA_CSS3 CharPointer_UTF8("\xef\x84\xbc")
#define FA_CUBE CharPointer_UTF8("\xef\x86\xb2")
#define FA_CUBES CharPointer_UTF8("\xef\x86\xb3")
#define FA_CUT CharPointer_UTF8("\xef\x83\x84")
#define FA_CUTLERY CharPointer_UTF8("\xef\x83\xb5")
#define FA_DASHBOARD CharPointer_UTF8("\xef\x83\xa4")
#define FA_DATABASE CharPointer_UTF8("\xef\x87\x80")
#define FA_DEDENT CharPointer_UTF8("\xef\x80\xbb")
#define FA_DELICIOUS CharPointer_UTF8("\xef\x86\xa5")
#define FA_DESKTOP CharPointer_UTF8("\xef\x84\x88")
#define FA_DEVIANTART CharPointer_UTF8("\xef\x86\xbd")
#define FA_DIGG CharPointer_UTF8("\xef\x86\xa6")
#define FA_DOLLAR CharPointer_UTF8("\xef\x85\x95")
#define FA_DOT_CIRCLE_O CharPointer_UTF8("\xef\x86\x92")
#define FA_DOWNLOAD CharPointer_UTF8("\xef\x80\x99")
#define FA_DRIBBBLE CharPointer_UTF8("\xef\x85\xbd")
#define FA_DROPBOX CharPointer_UTF8("\xef\x85\xab")
#define FA_DRUPAL CharPointer_UTF8("\xef\x86\xa9")
#define FA_EDIT CharPointer_UTF8("\xef\x81\x84")
#define FA_EJECT CharPointer_UTF8("\xef\x81\x92")
#define FA_ELLIPSIS_H CharPointer_UTF8("\xef\x85\x81")
#define FA_ELLIPSIS_V CharPointer_UTF8("\xef\x85\x82")
#define FA_EMPIRE CharPointer_UTF8("\xef\x87\x91")
#define FA_ENVELOPE CharPointer_UTF8("\xef\x83\xa0")
#define FA_ENVELOPE_O CharPointer_UTF8("\xef\x80\x83")
#define FA_ENVELOPE_SQUARE CharPointer_UTF8("\xef\x86\x99")
#define FA_ERASER CharPointer_UTF8("\xef\x84\xad")
#define FA_EUR CharPointer_UTF8("\xef\x85\x93")
#define FA_EURO CharPointer_UTF8("\xef\x85\x93")
#define FA_EXCHANGE CharPointer_UTF8("\xef\x83\xac")
#define FA_EXCLAMATION CharPointer_UTF8("\xef\x84\xaa")
#define FA_EXCLAMATION_CIRCLE CharPointer_UTF8("\xef\x81\xaa")
#define FA_EXCLAMATION_TRIANGLE CharPointer_UTF8("\xef\x81\xb1")
#define FA_EXPAND CharPointer_UTF8("\xef\x81\xa5")
#define FA_EXTERNAL_LINK CharPointer_UTF8("\xef\x82\x8e")
#define FA_EXTERNAL_LINK_SQUARE CharPointer_UTF8("\xef\x85\x8c")
#define FA_EYE CharPointer_UTF8("\xef\x81\xae")
#define FA_EYE_SLASH CharPointer_UTF8("\xef\x81\xb0")
#define FA_FACEBOOK CharPointer_UTF8("\xef\x82\x9a")
#define FA_FACEBOOK_SQUARE CharPointer_UTF8("\xef\x82\x82")
#define FA_FAST_BACKWARD CharPointer_UTF8("\xef\x81\x89")
#define FA_FAST_FORWARD CharPointer_UTF8("\xef\x81\x90")
#define FA_FAX CharPointer_UTF8("\xef\x86\xac")
#define FA_FEMALE CharPointer_UTF8("\xef\x86\x82")
#define FA_FIGHTER_JET CharPointer_UTF8("\xef\x83\xbb")
#define FA_FILE CharPointer_UTF8("\xef\x85\x9b")
#define FA_FILE_ARCHIVE_O CharPointer_UTF8("\xef\x87\x86")
#define FA_FILE_AUDIO_O CharPointer_UTF8("\xef\x87\x87")
#define FA_FILE_CODE_O CharPointer_UTF8("\xef\x87\x89")
#define FA_FILE_EXCEL_O CharPointer_UTF8("\xef\x87\x83")
#define FA_FILE_IMAGE_O CharPointer_UTF8("\xef\x87\x85")
#define FA_FILE_MOVIE_O CharPointer_UTF8("\xef\x87\x88")
#define FA_FILE_O CharPointer_UTF8("\xef\x80\x96")
#define FA_FILE_PDF_O CharPointer_UTF8("\xef\x87\x81")
#define FA_FILE_PHOTO_O CharPointer_UTF8("\xef\x87\x85")
#define FA_FILE_PICTURE_O CharPointer_UTF8("\xef\x87\x85")
#define FA_FILE_POWERPOINT_O CharPointer_UTF8("\xef\x87\x84")
#define FA_FILE_SOUND_O CharPointer_UTF8("\xef\x87\x87")
#define FA_FILE_TEXT CharPointer_UTF8("\xef\x85\x9c")
#define FA_FILE_TEXT_O CharPointer_UTF8("\xef\x83\xb6")
#define FA_FILE_VIDEO_O CharPointer_UTF8("\xef\x87\x88")
#define FA_FILE_WORD_O CharPointer_UTF8("\xef\x87\x82")
#define FA_FILE_ZIP_O CharPointer_UTF8("\xef\x87\x86")
#define FA_FILES_O CharPointer_UTF8("\xef\x83\x85")
#define FA_FILM CharPointer_UTF8("\xef\x80\x88")
#define FA_FILTER CharPointer_UTF8("\xef\x82\xb0")
#define FA_FIRE CharPointer_UTF8("\xef\x81\xad")
#define FA_FIRE_EXTINGUISHER CharPointer_UTF8("\xef\x84\xb4")
#define FA_FLAG CharPointer_UTF8("\xef\x80\xa4")
#define FA_FLAG_CHECKERED CharPointer_UTF8("\xef\x84\x9e")
#define FA_FLAG_O CharPointer_UTF8("\xef\x84\x9d")
#define FA_FLASH CharPointer_UTF8("\xef\x83\xa7")
#define FA_FLASK CharPointer_UTF8("\xef\x83\x83")
#define FA_FLICKR CharPointer_UTF8("\xef\x85\xae")
#define FA_FLOPPY_O CharPointer_UTF8("\xef\x83\x87")
#define FA_FOLDER CharPointer_UTF8("\xef\x81\xbb")
#define FA_FOLDER_O CharPointer_UTF8("\xef\x84\x94")
#define FA_FOLDER_OPEN CharPointer_UTF8("\xef\x81\xbc")
#define FA_FOLDER_OPEN_O CharPointer_UTF8("\xef\x84\x95")
#define FA_FONT CharPointer_UTF8("\xef\x80\xb1")
#define FA_FORWARD CharPointer_UTF8("\xef\x81\x8e")
#define FA_FOURSQUARE CharPointer_UTF8("\xef\x86\x80")
#define FA_FROWN_O CharPointer_UTF8("\xef\x84\x99")
#define FA_GAMEPAD CharPointer_UTF8("\xef\x84\x9b")
#define FA_GAVEL CharPointer_UTF8("\xef\x83\xa3")
#define FA_GBP CharPointer_UTF8("\xef\x85\x94")
#define FA_GE CharPointer_UTF8("\xef\x87\x91")
#define FA_GEAR CharPointer_UTF8("\xef\x80\x93")
#define FA_GEARS CharPointer_UTF8("\xef\x82\x85")
#define FA_GIFT CharPointer_UTF8("\xef\x81\xab")
#define FA_GIT CharPointer_UTF8("\xef\x87\x93")
#define FA_GIT_SQUARE CharPointer_UTF8("\xef\x87\x92")
#define FA_GITHUB CharPointer_UTF8("\xef\x82\x9b")
#define FA_GITHUB_ALT CharPointer_UTF8("\xef\x84\x93")
#define FA_GITHUB_SQUARE CharPointer_UTF8("\xef\x82\x92")
#define FA_GITTIP CharPointer_UTF8("\xef\x86\x84")
#define FA_GLASS CharPointer_UTF8("\xef\x80\x80")
#define FA_GLOBE CharPointer_UTF8("\xef\x82\xac")
#define FA_GOOGLE CharPointer_UTF8("\xef\x86\xa0")
#define FA_GOOGLE_PLUS CharPointer_UTF8("\xef\x83\x95")
#define FA_GOOGLE_PLUS_SQUARE CharPointer_UTF8("\xef\x83\x94")
#define FA_GRADUATION_CAP CharPointer_UTF8("\xef\x86\x9d")
#define FA_GROUP CharPointer_UTF8("\xef\x83\x80")
#define FA_H_SQUARE CharPointer_UTF8("\xef\x83\xbd")
#define FA_HACKER_NEWS CharPointer_UTF8("\xef\x87\x94")
#define FA_HAND_O_DOWN CharPointer_UTF8("\xef\x82\xa7")
#define FA_HAND_O_LEFT CharPointer_UTF8("\xef\x82\xa5")
#define FA_HAND_O_RIGHT CharPointer_UTF8("\xef\x82\xa4")
#define FA_HAND_O_UP CharPointer_UTF8("\xef\x82\xa6")
#define FA_HDD_O CharPointer_UTF8("\xef\x82\xa0")
#define FA_HEADER CharPointer_UTF8("\xef\x87\x9c")
#define FA_HEADPHONES CharPointer_UTF8("\xef\x80\xa5")
#define FA_HEART CharPointer_UTF8("\xef\x80\x84")
#define FA_HEART_O CharPointer_UTF8("\xef\x82\x8a")
#define FA_HISTORY CharPointer_UTF8("\xef\x87\x9a")
#define FA_HOME CharPointer_UTF8("\xef\x80\x95")
#define FA_HOSPITAL_O CharPointer_UTF8("\xef\x83\xb8")
#define FA_HTML5 CharPointer_UTF8("\xef\x84\xbb")
#define FA_IMAGE CharPointer_UTF8("\xef\x80\xbe")
#define FA_INBOX CharPointer_UTF8("\xef\x80\x9c")
#define FA_INDENT CharPointer_UTF8("\xef\x80\xbc")
#define FA_INFO CharPointer_UTF8("\xef\x84\xa9")
#define FA_INFO_CIRCLE CharPointer_UTF8("\xef\x81\x9a")
#define FA_INR CharPointer_UTF8("\xef\x85\x96")
#define FA_INSTAGRAM CharPointer_UTF8("\xef\x85\xad")
#define FA_INSTITUTION CharPointer_UTF8("\xef\x86\x9c")
#define FA_ITALIC CharPointer_UTF8("\xef\x80\xb3")
#define FA_JOOMLA CharPointer_UTF8("\xef\x86\xaa")
#define FA_JPY CharPointer_UTF8("\xef\x85\x97")
#define FA_JSFIDDLE CharPointer_UTF8("\xef\x87\x8c")
#define FA_KEY CharPointer_UTF8("\xef\x82\x84")
#define FA_KEYBOARD_O CharPointer_UTF8("\xef\x84\x9c")
#define FA_KRW CharPointer_UTF8("\xef\x85\x99")
#define FA_LANGUAGE CharPointer_UTF8("\xef\x86\xab")
#define FA_LAPTOP CharPointer_UTF8("\xef\x84\x89")
#define FA_LEAF CharPointer_UTF8("\xef\x81\xac")
#define FA_LEGAL CharPointer_UTF8("\xef\x83\xa3")
#define FA_LEMON_O CharPointer_UTF8("\xef\x82\x94")
#define FA_LEVEL_DOWN CharPointer_UTF8("\xef\x85\x89")
#define FA_LEVEL_UP CharPointer_UTF8("\xef\x85\x88")
#define FA_LIFE_BOUY CharPointer_UTF8("\xef\x87\x8d")
#define FA_LIFE_RING CharPointer_UTF8("\xef\x87\x8d")
#define FA_LIFE_SAVER CharPointer_UTF8("\xef\x87\x8d")
#define FA_LIGHTBULB_O CharPointer_UTF8("\xef\x83\xab")
#define FA_LINK CharPointer_UTF8("\xef\x83\x81")
#define FA_LINKEDIN CharPointer_UTF8("\xef\x83\xa1")
#define FA_LINKEDIN_SQUARE CharPointer_UTF8("\xef\x82\x8c")
#define FA_LINUX CharPointer_UTF8("\xef\x85\xbc")
#define FA_LIST CharPointer_UTF8("\xef\x80\xba")
#define FA_LIST_ALT CharPointer_UTF8("\xef\x80\xa2")
#define FA_LIST_OL CharPointer_UTF8("\xef\x83\x8b")
#define FA_LIST_UL CharPointer_UTF8("\xef\x83\x8a")
#define FA_LOCATION_ARROW CharPointer_UTF8("\xef\x84\xa4")
#define FA_LOCK CharPointer_UTF8("\xef\x80\xa3")
#define FA_LONG_ARROW_DOWN CharPointer_UTF8("\xef\x85\xb5")
#define FA_LONG_ARROW_LEFT CharPointer_UTF8("\xef\x85\xb7")
#define FA_LONG_ARROW_RIGHT CharPointer_UTF8("\xef\x85\xb8")
#define FA_LONG_ARROW_UP CharPointer_UTF8("\xef\x85\xb6")
#define FA_MAGIC CharPointer_UTF8("\xef\x83\x90")
#define FA_MAGNET CharPointer_UTF8("\xef\x81\xb6")
#define FA_MAIL_FORWARD CharPointer_UTF8("\xef\x81\xa4")
#define FA_MAIL_REPLY CharPointer_UTF8("\xef\x84\x92")
#define FA_MAIL_REPLY_ALL CharPointer_UTF8("\xef\x84\xa2")
#define FA_MALE CharPointer_UTF8("\xef\x86\x83")
#define FA_MAP_MARKER CharPointer_UTF8("\xef\x81\x81")
#define FA_MAXCDN CharPointer_UTF8("\xef\x84\xb6")
#define FA_MEDKIT CharPointer_UTF8("\xef\x83\xba")
#define FA_MEH_O CharPointer_UTF8("\xef\x84\x9a")
#define FA_MICROPHONE CharPointer_UTF8("\xef\x84\xb0")
#define FA_MICROPHONE_SLASH CharPointer_UTF8("\xef\x84\xb1")
#define FA_MINUS CharPointer_UTF8("\xef\x81\xa8")
#define FA_MINUS_CIRCLE CharPointer_UTF8("\xef\x81\x96")
#define FA_MINUS_SQUARE CharPointer_UTF8("\xef\x85\x86")
#define FA_MINUS_SQUARE_O CharPointer_UTF8("\xef\x85\x87")
#define FA_MOBILE CharPointer_UTF8("\xef\x84\x8b")
#define FA_MOBILE_PHONE CharPointer_UTF8("\xef\x84\x8b")
#define FA_MONEY CharPointer_UTF8("\xef\x83\x96")
#define FA_MOON_O CharPointer_UTF8("\xef\x86\x86")
#define FA_MORTAR_BOARD CharPointer_UTF8("\xef\x86\x9d")
#define FA_MUSIC CharPointer_UTF8("\xef\x80\x81")
#define FA_NAVICON CharPointer_UTF8("\xef\x83\x89")
#define FA_OPENID CharPointer_UTF8("\xef\x86\x9b")
#define FA_OUTDENT CharPointer_UTF8("\xef\x80\xbb")
#define FA_PAGELINES CharPointer_UTF8("\xef\x86\x8c")
#define FA_PAPER_PLANE CharPointer_UTF8("\xef\x87\x98")
#define FA_PAPER_PLANE_O CharPointer_UTF8("\xef\x87\x99")
#define FA_PAPERCLIP CharPointer_UTF8("\xef\x83\x86")
#define FA_PARAGRAPH CharPointer_UTF8("\xef\x87\x9d")
#define FA_PASTE CharPointer_UTF8("\xef\x83\xaa")
#define FA_PAUSE CharPointer_UTF8("\xef\x81\x8c")
#define FA_PAW CharPointer_UTF8("\xef\x86\xb0")
#define FA_PENCIL CharPointer_UTF8("\xef\x81\x80")
#define FA_PENCIL_SQUARE CharPointer_UTF8("\xef\x85\x8b")
#define FA_PENCIL_SQUARE_O CharPointer_UTF8("\xef\x81\x84")
#define FA_PHONE CharPointer_UTF8("\xef\x82\x95")
#define FA_PHONE_SQUARE CharPointer_UTF8("\xef\x82\x98")
#define FA_PHOTO CharPointer_UTF8("\xef\x80\xbe")
#define FA_PICTURE_O CharPointer_UTF8("\xef\x80\xbe")
#define FA_PIED_PIPER CharPointer_UTF8("\xef\x86\xa7")
#define FA_PIED_PIPER_ALT CharPointer_UTF8("\xef\x86\xa8")
#define FA_PIED_PIPER_SQUARE CharPointer_UTF8("\xef\x86\xa7")
#define FA_PINTEREST CharPointer_UTF8("\xef\x83\x92")
#define FA_PINTEREST_SQUARE CharPointer_UTF8("\xef\x83\x93")
#define FA_PLANE CharPointer_UTF8("\xef\x81\xb2")
#define FA_PLAY CharPointer_UTF8("\xef\x81\x8b")
#define FA_PLAY_CIRCLE CharPointer_UTF8("\xef\x85\x84")
#define FA_PLAY_CIRCLE_O CharPointer_UTF8("\xef\x80\x9d")
#define FA_PLUS CharPointer_UTF8("\xef\x81\xa7")
#define FA_PLUS_CIRCLE CharPointer_UTF8("\xef\x81\x95")
#define FA_PLUS_SQUARE CharPointer_UTF8("\xef\x83\xbe")
#define FA_PLUS_SQUARE_O CharPointer_UTF8("\xef\x86\x96")
#define FA_POWER_OFF CharPointer_UTF8("\xef\x80\x91")
#define FA_PRINT CharPointer_UTF8("\xef\x80\xaf")
#define FA_PUZZLE_PIECE CharPointer_UTF8("\xef\x84\xae")
#define FA_QQ CharPointer_UTF8("\xef\x87\x96")
#define FA_QRCODE CharPointer_UTF8("\xef\x80\xa9")
#define FA_QUESTION CharPointer_UTF8("\xef\x84\xa8")
#define FA_QUESTION_CIRCLE CharPointer_UTF8("\xef\x81\x99")
#define FA_QUOTE_LEFT CharPointer_UTF8("\xef\x84\x8d")
#define FA_QUOTE_RIGHT CharPointer_UTF8("\xef\x84\x8e")
#define FA_RA CharPointer_UTF8("\xef\x87\x90")
#define FA_RANDOM CharPointer_UTF8("\xef\x81\xb4")
#define FA_REBEL CharPointer_UTF8("\xef\x87\x90")
#define FA_RECYCLE CharPointer_UTF8("\xef\x86\xb8")
#define FA_REDDIT CharPointer_UTF8("\xef\x86\xa1")
#define FA_REDDIT_SQUARE CharPointer_UTF8("\xef\x86\xa2")
#define FA_REFRESH CharPointer_UTF8("\xef\x80\xa1")
#define FA_RENREN CharPointer_UTF8("\xef\x86\x8b")
#define FA_REORDER CharPointer_UTF8("\xef\x83\x89")
#define FA_REPEAT CharPointer_UTF8("\xef\x80\x9e")
#define FA_REPLY CharPointer_UTF8("\xef\x84\x92")
#define FA_REPLY_ALL CharPointer_UTF8("\xef\x84\xa2")
#define FA_RETWEET CharPointer_UTF8("\xef\x81\xb9")
#define FA_RMB CharPointer_UTF8("\xef\x85\x97")
#define FA_ROAD CharPointer_UTF8("\xef\x80\x98")
#define FA_ROCKET CharPointer_UTF8("\xef\x84\xb5")
#define FA_ROTATE_LEFT CharPointer_UTF8("\xef\x83\xa2")
#define FA_ROTATE_RIGHT CharPointer_UTF8("\xef\x80\x9e")
#define FA_ROUBLE CharPointer_UTF8("\xef\x85\x98")
#define FA_RSS CharPointer_UTF8("\xef\x82\x9e")
#define FA_RSS_SQUARE CharPointer_UTF8("\xef\x85\x83")
#define FA_RUB CharPointer_UTF8("\xef\x85\x98")
#define FA_RUBLE CharPointer_UTF8("\xef\x85\x98")
#define FA_RUPEE CharPointer_UTF8("\xef\x85\x96")
#define FA_SAVE CharPointer_UTF8("\xef\x83\x87")
#define FA_SCISSORS CharPointer_UTF8("\xef\x83\x84")
#define FA_SEARCH CharPointer_UTF8("\xef\x80\x82")
#define FA_SEARCH_MINUS CharPointer_UTF8("\xef\x80\x90")
#define FA_SEARCH_PLUS CharPointer_UTF8("\xef\x80\x8e")
#define FA_SEND CharPointer_UTF8("\xef\x87\x98")
#define FA_SEND_O CharPointer_UTF8("\xef\x87\x99")
#define FA_SHARE CharPointer_UTF8("\xef\x81\xa4")
#define FA_SHARE_ALT CharPointer_UTF8("\xef\x87\xa0")
#define FA_SHARE_ALT_SQUARE CharPointer_UTF8("\xef\x87\xa1")
#define FA_SHARE_SQUARE CharPointer_UTF8("\xef\x85\x8d")
#define FA_SHARE_SQUARE_O CharPointer_UTF8("\xef\x81\x85")
#define FA_SHIELD CharPointer_UTF8("\xef\x84\xb2")
#define FA_SHOPPING_CART CharPointer_UTF8("\xef\x81\xba")
#define FA_SIGN_IN CharPointer_UTF8("\xef\x82\x90")
#define FA_SIGN_OUT CharPointer_UTF8("\xef\x82\x8b")
#define FA_SIGNAL CharPointer_UTF8("\xef\x80\x92")
#define FA_SITEMAP CharPointer_UTF8("\xef\x83\xa8")
#define FA_SKYPE CharPointer_UTF8("\xef\x85\xbe")
#define FA_SLACK CharPointer_UTF8("\xef\x86\x98")
#define FA_SLIDERS CharPointer_UTF8("\xef\x87\x9e")
#define FA_SMILE_O CharPointer_UTF8("\xef\x84\x98")
#define FA_SORT CharPointer_UTF8("\xef\x83\x9c")
#define FA_SORT_ALPHA_ASC CharPointer_UTF8("\xef\x85\x9d")
#define FA_SORT_ALPHA_DESC CharPointer_UTF8("\xef\x85\x9e")
#define FA_SORT_AMOUNT_ASC CharPointer_UTF8("\xef\x85\xa0")
#define FA_SORT_AMOUNT_DESC CharPointer_UTF8("\xef\x85\xa1")
#define FA_SORT_ASC CharPointer_UTF8("\xef\x83\x9e")
#define FA_SORT_DESC CharPointer_UTF8("\xef\x83\x9d")
#define FA_SORT_DOWN CharPointer_UTF8("\xef\x83\x9d")
#define FA_SORT_NUMERIC_ASC CharPointer_UTF8("\xef\x85\xa2")
#define FA_SORT_NUMERIC_DESC CharPointer_UTF8("\xef\x85\xa3")
#define FA_SORT_UP CharPointer_UTF8("\xef\x83\x9e")
#define FA_SOUNDCLOUD CharPointer_UTF8("\xef\x86\xbe")
#define FA_SPACE_SHUTTLE CharPointer_UTF8("\xef\x86\x97")
#define FA_SPINNER CharPointer_UTF8("\xef\x84\x90")
#define FA_SPOON CharPointer_UTF8("\xef\x86\xb1")
#define FA_SPOTIFY CharPointer_UTF8("\xef\x86\xbc")
#define FA_SQUARE CharPointer_UTF8("\xef\x83\x88")
#define FA_SQUARE_O CharPointer_UTF8("\xef\x82\x96")
#define FA_STACK_EXCHANGE CharPointer_UTF8("\xef\x86\x8d")
#define FA_STACK_OVERFLOW CharPointer_UTF8("\xef\x85\xac")
#define FA_STAR CharPointer_UTF8("\xef\x80\x85")
#define FA_STAR_HALF CharPointer_UTF8("\xef\x82\x89")
#define FA_STAR_HALF_EMPTY CharPointer_UTF8("\xef\x84\xa3")
#define FA_STAR_HALF_FULL CharPointer_UTF8("\xef\x84\xa3")
#define FA_STAR_HALF_O CharPointer_UTF8("\xef\x84\xa3")
#define FA_STAR_O CharPointer_UTF8("\xef\x80\x86")
#define FA_STEAM CharPointer_UTF8("\xef\x86\xb6")
#define FA_STEAM_SQUARE CharPointer_UTF8("\xef\x86\xb7")
#define FA_STEP_BACKWARD CharPointer_UTF8("\xef\x81\x88")
#define FA_STEP_FORWARD CharPointer_UTF8("\xef\x81\x91")
#define FA_STETHOSCOPE CharPointer_UTF8("\xef\x83\xb1")
#define FA_STOP CharPointer_UTF8("\xef\x81\x8d")
#define FA_STRIKETHROUGH CharPointer_UTF8("\xef\x83\x8c")
#define FA_STUMBLEUPON CharPointer_UTF8("\xef\x86\xa4")
#define FA_STUMBLEUPON_CIRCLE CharPointer_UTF8("\xef\x86\xa3")
#define FA_SUBSCRIPT CharPointer_UTF8("\xef\x84\xac")
#define FA_SUITCASE CharPointer_UTF8("\xef\x83\xb2")
#define FA_SUN_O CharPointer_UTF8("\xef\x86\x85")
#define FA_SUPERSCRIPT CharPointer_UTF8("\xef\x84\xab")
#define FA_SUPPORT CharPointer_UTF8("\xef\x87\x8d")
#define FA_TABLE CharPointer_UTF8("\xef\x83\x8e")
#define FA_TABLET CharPointer_UTF8("\xef\x84\x8a")
#define FA_TACHOMETER CharPointer_UTF8("\xef\x83\xa4")
#define FA_TAG CharPointer_UTF8("\xef\x80\xab")
#define FA_TAGS CharPointer_UTF8("\xef\x80\xac")
#define FA_TASKS CharPointer_UTF8("\xef\x82\xae")
#define FA_TAXI CharPointer_UTF8("\xef\x86\xba")
#define FA_TENCENT_WEIBO CharPointer_UTF8("\xef\x87\x95")
#define FA_TERMINAL CharPointer_UTF8("\xef\x84\xa0")
#define FA_TEXT_HEIGHT CharPointer_UTF8("\xef\x80\xb4")
#define FA_TEXT_WIDTH CharPointer_UTF8("\xef\x80\xb5")
#define FA_TH CharPointer_UTF8("\xef\x80\x8a")
#define FA_TH_LARGE CharPointer_UTF8("\xef\x80\x89")
#define FA_TH_LIST CharPointer_UTF8("\xef\x80\x8b")
#define FA_THUMB_TACK CharPointer_UTF8("\xef\x82\x8d")
#define FA_THUMBS_DOWN CharPointer_UTF8("\xef\x85\xa5")
#define FA_THUMBS_O_DOWN CharPointer_UTF8("\xef\x82\x88")
#define FA_THUMBS_O_UP CharPointer_UTF8("\xef\x82\x87")
#define FA_THUMBS_UP CharPointer_UTF8("\xef\x85\xa4")
#define FA_TICKET CharPointer_UTF8("\xef\x85\x85")
#define FA_TIMES CharPointer_UTF8("\xef\x80\x8d")
#define FA_TIMES_CIRCLE CharPointer_UTF8("\xef\x81\x97")
#define FA_TIMES_CIRCLE_O CharPointer_UTF8("\xef\x81\x9c")
#define FA_TINT CharPointer_UTF8("\xef\x81\x83")
#define FA_TOGGLE_DOWN CharPointer_UTF8("\xef\x85\x90")
#define FA_TOGGLE_LEFT CharPointer_UTF8("\xef\x86\x91")
#define FA_TOGGLE_RIGHT CharPointer_UTF8("\xef\x85\x92")
#define FA_TOGGLE_UP CharPointer_UTF8("\xef\x85\x91")
#define FA_TRASH_O CharPointer_UTF8("\xef\x80\x94")
#define FA_TREE CharPointer_UTF8("\xef\x86\xbb")
#define FA_TRELLO CharPointer_UTF8("\xef\x86\x81")
#define FA_TROPHY CharPointer_UTF8("\xef\x82\x91")
#define FA_TRUCK CharPointer_UTF8("\xef\x83\x91")
#define FA_TRY CharPointer_UTF8("\xef\x86\x95")
#define FA_TUMBLR CharPointer_UTF8("\xef\x85\xb3")
#define FA_TUMBLR_SQUARE CharPointer_UTF8("\xef\x85\xb4")
#define FA_TURKISH_LIRA CharPointer_UTF8("\xef\x86\x95")
#define FA_TWITTER CharPointer_UTF8("\xef\x82\x99")
#define FA_TWITTER_SQUARE CharPointer_UTF8("\xef\x82\x81")
#define FA_UMBRELLA CharPointer_UTF8("\xef\x83\xa9")
#define FA_UNDERLINE CharPointer_UTF8("\xef\x83\x8d")
#define FA_UNDO CharPointer_UTF8("\xef\x83\xa2")
#define FA_UNIVERSITY CharPointer_UTF8("\xef\x86\x9c")
#define FA_UNLINK CharPointer_UTF8("\xef\x84\xa7")
#define FA_UNLOCK CharPointer_UTF8("\xef\x82\x9c")
#define FA_UNLOCK_ALT CharPointer_UTF8("\xef\x84\xbe")
#define FA_UNSORTED CharPointer_UTF8("\xef\x83\x9c")
#define FA_UPLOAD CharPointer_UTF8("\xef\x82\x93")
#define FA_USD CharPointer_UTF8("\xef\x85\x95")
#define FA_USER CharPointer_UTF8("\xef\x80\x87")
#define FA_USER_MD CharPointer_UTF8("\xef\x83\xb0")
#define FA_USERS CharPointer_UTF8("\xef\x83\x80")
#define FA_VIDEO_CAMERA CharPointer_UTF8("\xef\x80\xbd")
#define FA_VIMEO_SQUARE CharPointer_UTF8("\xef\x86\x94")
#define FA_VINE CharPointer_UTF8("\xef\x87\x8a")
#define FA_VK CharPointer_UTF8("\xef\x86\x89")
#define FA_VOLUME_DOWN CharPointer_UTF8("\xef\x80\xa7")
#define FA_VOLUME_OFF CharPointer_UTF8("\xef\x80\xa6")
#define FA_VOLUME_UP CharPointer_UTF8("\xef\x80\xa8")
#define FA_WARNING CharPointer_UTF8("\xef\x81\xb1")
#define FA_WECHAT CharPointer_UTF8("\xef\x87\x97")
#define FA_WEIBO CharPointer_UTF8("\xef\x86\x8a")
#define FA_WEIXIN CharPointer_UTF8("\xef\x87\x97")
#define FA_WHEELCHAIR CharPointer_UTF8("\xef\x86\x93")
#define FA_WINDOWS CharPointer_UTF8("\xef\x85\xba")
#define FA_WON CharPointer_UTF8("\xef\x85\x99")
#define FA_WORDPRESS CharPointer_UTF8("\xef\x86\x9a")
#define FA_WRENCH CharPointer_UTF8("\xef\x82\xad")
#define FA_XING CharPointer_UTF8("\xef\x85\xa8")
#define FA_XING_SQUARE CharPointer_UTF8("\xef\x85\xa9")
#define FA_YAHOO CharPointer_UTF8("\xef\x86\x9e")
#define FA_YEN CharPointer_UTF8("\xef\x85\x97")
#define FA_YOUTUBE CharPointer_UTF8("\xef\x85\xa7")
#define FA_YOUTUBE_PLAY CharPointer_UTF8("\xef\x85\xaa")
#define FA_YOUTUBE_SQUARE CharPointer_UTF8("\xef\x85\xa6")

#define FA_ALL                                                                 \
  {                                                                            \
    FA_ADJUST, FA_ADN, FA_ALIGN_CENTER, FA_ALIGN_JUSTIFY, FA_ALIGN_LEFT,       \
        FA_ALIGN_RIGHT, FA_AMBULANCE, FA_ANCHOR, FA_ANDROID,                   \
        FA_ANGLE_DOUBLE_DOWN, FA_ANGLE_DOUBLE_LEFT, FA_ANGLE_DOUBLE_RIGHT,     \
        FA_ANGLE_DOUBLE_UP, FA_ANGLE_DOWN, FA_ANGLE_LEFT, FA_ANGLE_RIGHT,      \
        FA_ANGLE_UP, FA_APPLE, FA_ARCHIVE, FA_ARROW_CIRCLE_DOWN,               \
        FA_ARROW_CIRCLE_LEFT, FA_ARROW_CIRCLE_O_DOWN, FA_ARROW_CIRCLE_O_LEFT,  \
        FA_ARROW_CIRCLE_O_RIGHT, FA_ARROW_CIRCLE_O_UP, FA_ARROW_CIRCLE_RIGHT,  \
        FA_ARROW_CIRCLE_UP, FA_ARROW_DOWN, FA_ARROW_LEFT, FA_ARROW_RIGHT,      \
        FA_ARROW_UP, FA_ARROWS, FA_ARROWS_ALT, FA_ARROWS_H, FA_ARROWS_V,       \
        FA_ASTERISK, FA_AUTOMOBILE, FA_BACKWARD, FA_BAN, FA_BANK,              \
        FA_BAR_CHART_O, FA_BARCODE, FA_BARS, FA_BEER, FA_BEHANCE,              \
        FA_BEHANCE_SQUARE, FA_BELL, FA_BELL_O, FA_BITBUCKET,                   \
        FA_BITBUCKET_SQUARE, FA_BITCOIN, FA_BOLD, FA_BOLT, FA_BOMB, FA_BOOK,   \
        FA_BOOKMARK, FA_BOOKMARK_O, FA_BRIEFCASE, FA_BTC, FA_BUG, FA_BUILDING, \
        FA_BUILDING_O, FA_BULLHORN, FA_BULLSEYE, FA_CAB, FA_CALENDAR,          \
        FA_CALENDAR_O, FA_CAMERA, FA_CAMERA_RETRO, FA_CAR, FA_CARET_DOWN,      \
        FA_CARET_LEFT, FA_CARET_RIGHT, FA_CARET_SQUARE_O_DOWN,                 \
        FA_CARET_SQUARE_O_LEFT, FA_CARET_SQUARE_O_RIGHT, FA_CARET_SQUARE_O_UP, \
        FA_CARET_UP, FA_CERTIFICATE, FA_CHAIN, FA_CHAIN_BROKEN, FA_CHECK,      \
        FA_CHECK_CIRCLE, FA_CHECK_CIRCLE_O, FA_CHECK_SQUARE,                   \
        FA_CHECK_SQUARE_O, FA_CHEVRON_CIRCLE_DOWN, FA_CHEVRON_CIRCLE_LEFT,     \
        FA_CHEVRON_CIRCLE_RIGHT, FA_CHEVRON_CIRCLE_UP, FA_CHEVRON_DOWN,        \
        FA_CHEVRON_LEFT, FA_CHEVRON_RIGHT, FA_CHEVRON_UP, FA_CHILD, FA_CIRCLE, \
        FA_CIRCLE_O, FA_CIRCLE_O_NOTCH, FA_CIRCLE_THIN, FA_CLIPBOARD,          \
        FA_CLOCK_O, FA_CLOUD, FA_CLOUD_DOWNLOAD, FA_CLOUD_UPLOAD, FA_CNY,      \
        FA_CODE, FA_CODE_FORK, FA_CODEPEN, FA_COFFEE, FA_COG, FA_COGS,         \
        FA_COLUMNS, FA_COMMENT, FA_COMMENT_O, FA_COMMENTS, FA_COMMENTS_O,      \
        FA_COMPASS, FA_COMPRESS, FA_COPY, FA_CREDIT_CARD, FA_CROP,             \
        FA_CROSSHAIRS, FA_CSS3, FA_CUBE, FA_CUBES, FA_CUT, FA_CUTLERY,         \
        FA_DASHBOARD, FA_DATABASE, FA_DEDENT, FA_DELICIOUS, FA_DESKTOP,        \
        FA_DEVIANTART, FA_DIGG, FA_DOLLAR, FA_DOT_CIRCLE_O, FA_DOWNLOAD,       \
        FA_DRIBBBLE, FA_DROPBOX, FA_DRUPAL, FA_EDIT, FA_EJECT, FA_ELLIPSIS_H,  \
        FA_ELLIPSIS_V, FA_EMPIRE, FA_ENVELOPE, FA_ENVELOPE_O,                  \
        FA_ENVELOPE_SQUARE, FA_ERASER, FA_EUR, FA_EURO, FA_EXCHANGE,           \
        FA_EXCLAMATION, FA_EXCLAMATION_CIRCLE, FA_EXCLAMATION_TRIANGLE,        \
        FA_EXPAND, FA_EXTERNAL_LINK, FA_EXTERNAL_LINK_SQUARE, FA_EYE,          \
        FA_EYE_SLASH, FA_FACEBOOK, FA_FACEBOOK_SQUARE, FA_FAST_BACKWARD,       \
        FA_FAST_FORWARD, FA_FAX, FA_FEMALE, FA_FIGHTER_JET, FA_FILE,           \
        FA_FILE_ARCHIVE_O, FA_FILE_AUDIO_O, FA_FILE_CODE_O, FA_FILE_EXCEL_O,   \
        FA_FILE_IMAGE_O, FA_FILE_MOVIE_O, FA_FILE_O, FA_FILE_PDF_O,            \
        FA_FILE_PHOTO_O, FA_FILE_PICTURE_O, FA_FILE_POWERPOINT_O,              \
        FA_FILE_SOUND_O, FA_FILE_TEXT, FA_FILE_TEXT_O, FA_FILE_VIDEO_O,        \
        FA_FILE_WORD_O, FA_FILE_ZIP_O, FA_FILES_O, FA_FILM, FA_FILTER,         \
        FA_FIRE, FA_FIRE_EXTINGUISHER, FA_FLAG, FA_FLAG_CHECKERED, FA_FLAG_O,  \
        FA_FLASH, FA_FLASK, FA_FLICKR, FA_FLOPPY_O, FA_FOLDER, FA_FOLDER_O,    \
        FA_FOLDER_OPEN, FA_FOLDER_OPEN_O, FA_FONT, FA_FORWARD, FA_FOURSQUARE,  \
        FA_FROWN_O, FA_GAMEPAD, FA_GAVEL, FA_GBP, FA_GE, FA_GEAR, FA_GEARS,    \
        FA_GIFT, FA_GIT, FA_GIT_SQUARE, FA_GITHUB, FA_GITHUB_ALT,              \
        FA_GITHUB_SQUARE, FA_GITTIP, FA_GLASS, FA_GLOBE, FA_GOOGLE,            \
        FA_GOOGLE_PLUS, FA_GOOGLE_PLUS_SQUARE, FA_GRADUATION_CAP, FA_GROUP,    \
        FA_H_SQUARE, FA_HACKER_NEWS, FA_HAND_O_DOWN, FA_HAND_O_LEFT,           \
        FA_HAND_O_RIGHT, FA_HAND_O_UP, FA_HDD_O, FA_HEADER, FA_HEADPHONES,     \
        FA_HEART, FA_HEART_O, FA_HISTORY, FA_HOME, FA_HOSPITAL_O, FA_HTML5,    \
        FA_IMAGE, FA_INBOX, FA_INDENT, FA_INFO, FA_INFO_CIRCLE, FA_INR,        \
        FA_INSTAGRAM, FA_INSTITUTION, FA_ITALIC, FA_JOOMLA, FA_JPY,            \
        FA_JSFIDDLE, FA_KEY, FA_KEYBOARD_O, FA_KRW, FA_LANGUAGE, FA_LAPTOP,    \
        FA_LEAF, FA_LEGAL, FA_LEMON_O, FA_LEVEL_DOWN, FA_LEVEL_UP,             \
        FA_LIFE_BOUY, FA_LIFE_RING, FA_LIFE_SAVER, FA_LIGHTBULB_O, FA_LINK,    \
        FA_LINKEDIN, FA_LINKEDIN_SQUARE, FA_LINUX, FA_LIST, FA_LIST_ALT,       \
        FA_LIST_OL, FA_LIST_UL, FA_LOCATION_ARROW, FA_LOCK,                    \
        FA_LONG_ARROW_DOWN, FA_LONG_ARROW_LEFT, FA_LONG_ARROW_RIGHT,           \
        FA_LONG_ARROW_UP, FA_MAGIC, FA_MAGNET, FA_MAIL_FORWARD, FA_MAIL_REPLY, \
        FA_MAIL_REPLY_ALL, FA_MALE, FA_MAP_MARKER, FA_MAXCDN, FA_MEDKIT,       \
        FA_MEH_O, FA_MICROPHONE, FA_MICROPHONE_SLASH, FA_MINUS,                \
        FA_MINUS_CIRCLE, FA_MINUS_SQUARE, FA_MINUS_SQUARE_O, FA_MOBILE,        \
        FA_MOBILE_PHONE, FA_MONEY, FA_MOON_O, FA_MORTAR_BOARD, FA_MUSIC,       \
        FA_NAVICON, FA_OPENID, FA_OUTDENT, FA_PAGELINES, FA_PAPER_PLANE,       \
        FA_PAPER_PLANE_O, FA_PAPERCLIP, FA_PARAGRAPH, FA_PASTE, FA_PAUSE,      \
        FA_PAW, FA_PENCIL, FA_PENCIL_SQUARE, FA_PENCIL_SQUARE_O, FA_PHONE,     \
        FA_PHONE_SQUARE, FA_PHOTO, FA_PICTURE_O, FA_PIED_PIPER,                \
        FA_PIED_PIPER_ALT, FA_PIED_PIPER_SQUARE, FA_PINTEREST,                 \
        FA_PINTEREST_SQUARE, FA_PLANE, FA_PLAY, FA_PLAY_CIRCLE,                \
        FA_PLAY_CIRCLE_O, FA_PLUS, FA_PLUS_CIRCLE, FA_PLUS_SQUARE,             \
        FA_PLUS_SQUARE_O, FA_POWER_OFF, FA_PRINT, FA_PUZZLE_PIECE, FA_QQ,      \
        FA_QRCODE, FA_QUESTION, FA_QUESTION_CIRCLE, FA_QUOTE_LEFT,             \
        FA_QUOTE_RIGHT, FA_RA, FA_RANDOM, FA_REBEL, FA_RECYCLE, FA_REDDIT,     \
        FA_REDDIT_SQUARE, FA_REFRESH, FA_RENREN, FA_REORDER, FA_REPEAT,        \
        FA_REPLY, FA_REPLY_ALL, FA_RETWEET, FA_RMB, FA_ROAD, FA_ROCKET,        \
        FA_ROTATE_LEFT, FA_ROTATE_RIGHT, FA_ROUBLE, FA_RSS, FA_RSS_SQUARE,     \
        FA_RUB, FA_RUBLE, FA_RUPEE, FA_SAVE, FA_SCISSORS, FA_SEARCH,           \
        FA_SEARCH_MINUS, FA_SEARCH_PLUS, FA_SEND, FA_SEND_O, FA_SHARE,         \
        FA_SHARE_ALT, FA_SHARE_ALT_SQUARE, FA_SHARE_SQUARE, FA_SHARE_SQUARE_O, \
        FA_SHIELD, FA_SHOPPING_CART, FA_SIGN_IN, FA_SIGN_OUT, FA_SIGNAL,       \
        FA_SITEMAP, FA_SKYPE, FA_SLACK, FA_SLIDERS, FA_SMILE_O, FA_SORT,       \
        FA_SORT_ALPHA_ASC, FA_SORT_ALPHA_DESC, FA_SORT_AMOUNT_ASC,             \
        FA_SORT_AMOUNT_DESC, FA_SORT_ASC, FA_SORT_DESC, FA_SORT_DOWN,          \
        FA_SORT_NUMERIC_ASC, FA_SORT_NUMERIC_DESC, FA_SORT_UP, FA_SOUNDCLOUD,  \
        FA_SPACE_SHUTTLE, FA_SPINNER, FA_SPOON, FA_SPOTIFY, FA_SQUARE,         \
        FA_SQUARE_O, FA_STACK_EXCHANGE, FA_STACK_OVERFLOW, FA_STAR,            \
        FA_STAR_HALF, FA_STAR_HALF_EMPTY, FA_STAR_HALF_FULL, FA_STAR_HALF_O,   \
        FA_STAR_O, FA_STEAM, FA_STEAM_SQUARE, FA_STEP_BACKWARD,                \
        FA_STEP_FORWARD, FA_STETHOSCOPE, FA_STOP, FA_STRIKETHROUGH,            \
        FA_STUMBLEUPON, FA_STUMBLEUPON_CIRCLE, FA_SUBSCRIPT, FA_SUITCASE,      \
        FA_SUN_O, FA_SUPERSCRIPT, FA_SUPPORT, FA_TABLE, FA_TABLET,             \
        FA_TACHOMETER, FA_TAG, FA_TAGS, FA_TASKS, FA_TAXI, FA_TENCENT_WEIBO,   \
        FA_TERMINAL, FA_TEXT_HEIGHT, FA_TEXT_WIDTH, FA_TH, FA_TH_LARGE,        \
        FA_TH_LIST, FA_THUMB_TACK, FA_THUMBS_DOWN, FA_THUMBS_O_DOWN,           \
        FA_THUMBS_O_UP, FA_THUMBS_UP, FA_TICKET, FA_TIMES, FA_TIMES_CIRCLE,    \
        FA_TIMES_CIRCLE_O, FA_TINT, FA_TOGGLE_DOWN, FA_TOGGLE_LEFT,            \
        FA_TOGGLE_RIGHT, FA_TOGGLE_UP, FA_TRASH_O, FA_TREE, FA_TRELLO,         \
        FA_TROPHY, FA_TRUCK, FA_TRY, FA_TUMBLR, FA_TUMBLR_SQUARE,              \
        FA_TURKISH_LIRA, FA_TWITTER, FA_TWITTER_SQUARE, FA_UMBRELLA,           \
        FA_UNDERLINE, FA_UNDO, FA_UNIVERSITY, FA_UNLINK, FA_UNLOCK,            \
        FA_UNLOCK_ALT, FA_UNSORTED, FA_UPLOAD, FA_USD, FA_USER, FA_USER_MD,    \
        FA_USERS, FA_VIDEO_CAMERA, FA_VIMEO_SQUARE, FA_VINE, FA_VK,            \
        FA_VOLUME_DOWN, FA_VOLUME_OFF, FA_VOLUME_UP, FA_WARNING, FA_WECHAT,    \
        FA_WEIBO, FA_WEIXIN, FA_WHEELCHAIR, FA_WINDOWS, FA_WON, FA_WORDPRESS,  \
        FA_WRENCH, FA_XING, FA_XING_SQUARE, FA_YAHOO, FA_YEN, FA_YOUTUBE,      \
        FA_YOUTUBE_PLAY, FA_YOUTUBE_SQUARE                                     \
  }

#endif // FONTAWESOME_H_INCLUDED
