// 8859-2, to Unicode table
// Derived from the tables available at unicode.org

static uint16_t iso8859_2[] = {
    0x00, 0x0000, //	NULL
    0x01, 0x0001, //	START OF HEADING
    0x02, 0x0002, //	START OF TEXT
    0x03, 0x0003, //	END OF TEXT
    0x04, 0x0004, //	END OF TRANSMISSION
    0x05, 0x0005, //	ENQUIRY
    0x06, 0x0006, //	ACKNOWLEDGE
    0x07, 0x0007, //	BELL
    0x08, 0x0008, //	BACKSPACE
    0x09, 0x0009, //	HORIZONTAL TABULATION
    0x0A, 0x000A, //	LINE FEED
    0x0B, 0x000B, //	VERTICAL TABULATION
    0x0C, 0x000C, //	FORM FEED
    0x0D, 0x000D, //	CARRIAGE RETURN
    0x0E, 0x000E, //	SHIFT OUT
    0x0F, 0x000F, //	SHIFT IN
    0x10, 0x0010, //	DATA LINK ESCAPE
    0x11, 0x0011, //	DEVICE CONTROL ONE
    0x12, 0x0012, //	DEVICE CONTROL TWO
    0x13, 0x0013, //	DEVICE CONTROL THREE
    0x14, 0x0014, //	DEVICE CONTROL FOUR
    0x15, 0x0015, //	NEGATIVE ACKNOWLEDGE
    0x16, 0x0016, //	SYNCHRONOUS IDLE
    0x17, 0x0017, //	END OF TRANSMISSION BLOCK
    0x18, 0x0018, //	CANCEL
    0x19, 0x0019, //	END OF MEDIUM
    0x1A, 0x001A, //	SUBSTITUTE
    0x1B, 0x001B, //	ESCAPE
    0x1C, 0x001C, //	FILE SEPARATOR
    0x1D, 0x001D, //	GROUP SEPARATOR
    0x1E, 0x001E, //	RECORD SEPARATOR
    0x1F, 0x001F, //	UNIT SEPARATOR
    0x20, 0x0020, //	SPACE
    0x21, 0x0021, //	EXCLAMATION MARK
    0x22, 0x0022, //	QUOTATION MARK
    0x23, 0x0023, //	NUMBER SIGN
    0x24, 0x0024, //	DOLLAR SIGN
    0x25, 0x0025, //	PERCENT SIGN
    0x26, 0x0026, //	AMPERSAND
    0x27, 0x0027, //	APOSTROPHE
    0x28, 0x0028, //	LEFT PARENTHESIS
    0x29, 0x0029, //	RIGHT PARENTHESIS
    0x2A, 0x002A, //	ASTERISK
    0x2B, 0x002B, //	PLUS SIGN
    0x2C, 0x002C, //	COMMA
    0x2D, 0x002D, //	HYPHEN-MINUS
    0x2E, 0x002E, //	FULL STOP
    0x2F, 0x002F, //	SOLIDUS
    0x30, 0x0030, //	DIGIT ZERO
    0x31, 0x0031, //	DIGIT ONE
    0x32, 0x0032, //	DIGIT TWO
    0x33, 0x0033, //	DIGIT THREE
    0x34, 0x0034, //	DIGIT FOUR
    0x35, 0x0035, //	DIGIT FIVE
    0x36, 0x0036, //	DIGIT SIX
    0x37, 0x0037, //	DIGIT SEVEN
    0x38, 0x0038, //	DIGIT EIGHT
    0x39, 0x0039, //	DIGIT NINE
    0x3A, 0x003A, //	COLON
    0x3B, 0x003B, //	SEMICOLON
    0x3C, 0x003C, //	LESS-THAN SIGN
    0x3D, 0x003D, //	EQUALS SIGN
    0x3E, 0x003E, //	GREATER-THAN SIGN
    0x3F, 0x003F, //	QUESTION MARK
    0x40, 0x0040, //	COMMERCIAL AT
    0x41, 0x0041, //	LATIN CAPITAL LETTER A
    0x42, 0x0042, //	LATIN CAPITAL LETTER B
    0x43, 0x0043, //	LATIN CAPITAL LETTER C
    0x44, 0x0044, //	LATIN CAPITAL LETTER D
    0x45, 0x0045, //	LATIN CAPITAL LETTER E
    0x46, 0x0046, //	LATIN CAPITAL LETTER F
    0x47, 0x0047, //	LATIN CAPITAL LETTER G
    0x48, 0x0048, //	LATIN CAPITAL LETTER H
    0x49, 0x0049, //	LATIN CAPITAL LETTER I
    0x4A, 0x004A, //	LATIN CAPITAL LETTER J
    0x4B, 0x004B, //	LATIN CAPITAL LETTER K
    0x4C, 0x004C, //	LATIN CAPITAL LETTER L
    0x4D, 0x004D, //	LATIN CAPITAL LETTER M
    0x4E, 0x004E, //	LATIN CAPITAL LETTER N
    0x4F, 0x004F, //	LATIN CAPITAL LETTER O
    0x50, 0x0050, //	LATIN CAPITAL LETTER P
    0x51, 0x0051, //	LATIN CAPITAL LETTER Q
    0x52, 0x0052, //	LATIN CAPITAL LETTER R
    0x53, 0x0053, //	LATIN CAPITAL LETTER S
    0x54, 0x0054, //	LATIN CAPITAL LETTER T
    0x55, 0x0055, //	LATIN CAPITAL LETTER U
    0x56, 0x0056, //	LATIN CAPITAL LETTER V
    0x57, 0x0057, //	LATIN CAPITAL LETTER W
    0x58, 0x0058, //	LATIN CAPITAL LETTER X
    0x59, 0x0059, //	LATIN CAPITAL LETTER Y
    0x5A, 0x005A, //	LATIN CAPITAL LETTER Z
    0x5B, 0x005B, //	LEFT SQUARE BRACKET
    0x5C, 0x005C, //	REVERSE SOLIDUS
    0x5D, 0x005D, //	RIGHT SQUARE BRACKET
    0x5E, 0x005E, //	CIRCUMFLEX ACCENT
    0x5F, 0x005F, //	LOW LINE
    0x60, 0x0060, //	GRAVE ACCENT
    0x61, 0x0061, //	LATIN SMALL LETTER A
    0x62, 0x0062, //	LATIN SMALL LETTER B
    0x63, 0x0063, //	LATIN SMALL LETTER C
    0x64, 0x0064, //	LATIN SMALL LETTER D
    0x65, 0x0065, //	LATIN SMALL LETTER E
    0x66, 0x0066, //	LATIN SMALL LETTER F
    0x67, 0x0067, //	LATIN SMALL LETTER G
    0x68, 0x0068, //	LATIN SMALL LETTER H
    0x69, 0x0069, //	LATIN SMALL LETTER I
    0x6A, 0x006A, //	LATIN SMALL LETTER J
    0x6B, 0x006B, //	LATIN SMALL LETTER K
    0x6C, 0x006C, //	LATIN SMALL LETTER L
    0x6D, 0x006D, //	LATIN SMALL LETTER M
    0x6E, 0x006E, //	LATIN SMALL LETTER N
    0x6F, 0x006F, //	LATIN SMALL LETTER O
    0x70, 0x0070, //	LATIN SMALL LETTER P
    0x71, 0x0071, //	LATIN SMALL LETTER Q
    0x72, 0x0072, //	LATIN SMALL LETTER R
    0x73, 0x0073, //	LATIN SMALL LETTER S
    0x74, 0x0074, //	LATIN SMALL LETTER T
    0x75, 0x0075, //	LATIN SMALL LETTER U
    0x76, 0x0076, //	LATIN SMALL LETTER V
    0x77, 0x0077, //	LATIN SMALL LETTER W
    0x78, 0x0078, //	LATIN SMALL LETTER X
    0x79, 0x0079, //	LATIN SMALL LETTER Y
    0x7A, 0x007A, //	LATIN SMALL LETTER Z
    0x7B, 0x007B, //	LEFT CURLY BRACKET
    0x7C, 0x007C, //	VERTICAL LINE
    0x7D, 0x007D, //	RIGHT CURLY BRACKET
    0x7E, 0x007E, //	TILDE
    0x7F, 0x007F, //	DELETE
    0x80, 0x0080, //	<control>
    0x81, 0x0081, //	<control>
    0x82, 0x0082, //	<control>
    0x83, 0x0083, //	<control>
    0x84, 0x0084, //	<control>
    0x85, 0x0085, //	<control>
    0x86, 0x0086, //	<control>
    0x87, 0x0087, //	<control>
    0x88, 0x0088, //	<control>
    0x89, 0x0089, //	<control>
    0x8A, 0x008A, //	<control>
    0x8B, 0x008B, //	<control>
    0x8C, 0x008C, //	<control>
    0x8D, 0x008D, //	<control>
    0x8E, 0x008E, //	<control>
    0x8F, 0x008F, //	<control>
    0x90, 0x0090, //	<control>
    0x91, 0x0091, //	<control>
    0x92, 0x0092, //	<control>
    0x93, 0x0093, //	<control>
    0x94, 0x0094, //	<control>
    0x95, 0x0095, //	<control>
    0x96, 0x0096, //	<control>
    0x97, 0x0097, //	<control>
    0x98, 0x0098, //	<control>
    0x99, 0x0099, //	<control>
    0x9A, 0x009A, //	<control>
    0x9B, 0x009B, //	<control>
    0x9C, 0x009C, //	<control>
    0x9D, 0x009D, //	<control>
    0x9E, 0x009E, //	<control>
    0x9F, 0x009F, //	<control>
    0xA0, 0x00A0, //	NO-BREAK SPACE
    0xA1, 0x0104, //	LATIN CAPITAL LETTER A WITH OGONEK
    0xA2, 0x02D8, //	BREVE
    0xA3, 0x0141, //	LATIN CAPITAL LETTER L WITH STROKE
    0xA4, 0x00A4, //	CURRENCY SIGN
    0xA5, 0x013D, //	LATIN CAPITAL LETTER L WITH CARON
    0xA6, 0x015A, //	LATIN CAPITAL LETTER S WITH ACUTE
    0xA7, 0x00A7, //	SECTION SIGN
    0xA8, 0x00A8, //	DIAERESIS
    0xA9, 0x0160, //	LATIN CAPITAL LETTER S WITH CARON
    0xAA, 0x015E, //	LATIN CAPITAL LETTER S WITH CEDILLA
    0xAB, 0x0164, //	LATIN CAPITAL LETTER T WITH CARON
    0xAC, 0x0179, //	LATIN CAPITAL LETTER Z WITH ACUTE
    0xAD, 0x00AD, //	SOFT HYPHEN
    0xAE, 0x017D, //	LATIN CAPITAL LETTER Z WITH CARON
    0xAF, 0x017B, //	LATIN CAPITAL LETTER Z WITH DOT ABOVE
    0xB0, 0x00B0, //	DEGREE SIGN
    0xB1, 0x0105, //	LATIN SMALL LETTER A WITH OGONEK
    0xB2, 0x02DB, //	OGONEK
    0xB3, 0x0142, //	LATIN SMALL LETTER L WITH STROKE
    0xB4, 0x00B4, //	ACUTE ACCENT
    0xB5, 0x013E, //	LATIN SMALL LETTER L WITH CARON
    0xB6, 0x015B, //	LATIN SMALL LETTER S WITH ACUTE
    0xB7, 0x02C7, //	CARON
    0xB8, 0x00B8, //	CEDILLA
    0xB9, 0x0161, //	LATIN SMALL LETTER S WITH CARON
    0xBA, 0x015F, //	LATIN SMALL LETTER S WITH CEDILLA
    0xBB, 0x0165, //	LATIN SMALL LETTER T WITH CARON
    0xBC, 0x017A, //	LATIN SMALL LETTER Z WITH ACUTE
    0xBD, 0x02DD, //	DOUBLE ACUTE ACCENT
    0xBE, 0x017E, //	LATIN SMALL LETTER Z WITH CARON
    0xBF, 0x017C, //	LATIN SMALL LETTER Z WITH DOT ABOVE
    0xC0, 0x0154, //	LATIN CAPITAL LETTER R WITH ACUTE
    0xC1, 0x00C1, //	LATIN CAPITAL LETTER A WITH ACUTE
    0xC2, 0x00C2, //	LATIN CAPITAL LETTER A WITH CIRCUMFLEX
    0xC3, 0x0102, //	LATIN CAPITAL LETTER A WITH BREVE
    0xC4, 0x00C4, //	LATIN CAPITAL LETTER A WITH DIAERESIS
    0xC5, 0x0139, //	LATIN CAPITAL LETTER L WITH ACUTE
    0xC6, 0x0106, //	LATIN CAPITAL LETTER C WITH ACUTE
    0xC7, 0x00C7, //	LATIN CAPITAL LETTER C WITH CEDILLA
    0xC8, 0x010C, //	LATIN CAPITAL LETTER C WITH CARON
    0xC9, 0x00C9, //	LATIN CAPITAL LETTER E WITH ACUTE
    0xCA, 0x0118, //	LATIN CAPITAL LETTER E WITH OGONEK
    0xCB, 0x00CB, //	LATIN CAPITAL LETTER E WITH DIAERESIS
    0xCC, 0x011A, //	LATIN CAPITAL LETTER E WITH CARON
    0xCD, 0x00CD, //	LATIN CAPITAL LETTER I WITH ACUTE
    0xCE, 0x00CE, //	LATIN CAPITAL LETTER I WITH CIRCUMFLEX
    0xCF, 0x010E, //	LATIN CAPITAL LETTER D WITH CARON
    0xD0, 0x0110, //	LATIN CAPITAL LETTER D WITH STROKE
    0xD1, 0x0143, //	LATIN CAPITAL LETTER N WITH ACUTE
    0xD2, 0x0147, //	LATIN CAPITAL LETTER N WITH CARON
    0xD3, 0x00D3, //	LATIN CAPITAL LETTER O WITH ACUTE
    0xD4, 0x00D4, //	LATIN CAPITAL LETTER O WITH CIRCUMFLEX
    0xD5, 0x0150, //	LATIN CAPITAL LETTER O WITH DOUBLE ACUTE
    0xD6, 0x00D6, //	LATIN CAPITAL LETTER O WITH DIAERESIS
    0xD7, 0x00D7, //	MULTIPLICATION SIGN
    0xD8, 0x0158, //	LATIN CAPITAL LETTER R WITH CARON
    0xD9, 0x016E, //	LATIN CAPITAL LETTER U WITH RING ABOVE
    0xDA, 0x00DA, //	LATIN CAPITAL LETTER U WITH ACUTE
    0xDB, 0x0170, //	LATIN CAPITAL LETTER U WITH DOUBLE ACUTE
    0xDC, 0x00DC, //	LATIN CAPITAL LETTER U WITH DIAERESIS
    0xDD, 0x00DD, //	LATIN CAPITAL LETTER Y WITH ACUTE
    0xDE, 0x0162, //	LATIN CAPITAL LETTER T WITH CEDILLA
    0xDF, 0x00DF, //	LATIN SMALL LETTER SHARP S
    0xE0, 0x0155, //	LATIN SMALL LETTER R WITH ACUTE
    0xE1, 0x00E1, //	LATIN SMALL LETTER A WITH ACUTE
    0xE2, 0x00E2, //	LATIN SMALL LETTER A WITH CIRCUMFLEX
    0xE3, 0x0103, //	LATIN SMALL LETTER A WITH BREVE
    0xE4, 0x00E4, //	LATIN SMALL LETTER A WITH DIAERESIS
    0xE5, 0x013A, //	LATIN SMALL LETTER L WITH ACUTE
    0xE6, 0x0107, //	LATIN SMALL LETTER C WITH ACUTE
    0xE7, 0x00E7, //	LATIN SMALL LETTER C WITH CEDILLA
    0xE8, 0x010D, //	LATIN SMALL LETTER C WITH CARON
    0xE9, 0x00E9, //	LATIN SMALL LETTER E WITH ACUTE
    0xEA, 0x0119, //	LATIN SMALL LETTER E WITH OGONEK
    0xEB, 0x00EB, //	LATIN SMALL LETTER E WITH DIAERESIS
    0xEC, 0x011B, //	LATIN SMALL LETTER E WITH CARON
    0xED, 0x00ED, //	LATIN SMALL LETTER I WITH ACUTE
    0xEE, 0x00EE, //	LATIN SMALL LETTER I WITH CIRCUMFLEX
    0xEF, 0x010F, //	LATIN SMALL LETTER D WITH CARON
    0xF0, 0x0111, //	LATIN SMALL LETTER D WITH STROKE
    0xF1, 0x0144, //	LATIN SMALL LETTER N WITH ACUTE
    0xF2, 0x0148, //	LATIN SMALL LETTER N WITH CARON
    0xF3, 0x00F3, //	LATIN SMALL LETTER O WITH ACUTE
    0xF4, 0x00F4, //	LATIN SMALL LETTER O WITH CIRCUMFLEX
    0xF5, 0x0151, //	LATIN SMALL LETTER O WITH DOUBLE ACUTE
    0xF6, 0x00F6, //	LATIN SMALL LETTER O WITH DIAERESIS
    0xF7, 0x00F7, //	DIVISION SIGN
    0xF8, 0x0159, //	LATIN SMALL LETTER R WITH CARON
    0xF9, 0x016F, //	LATIN SMALL LETTER U WITH RING ABOVE
    0xFA, 0x00FA, //	LATIN SMALL LETTER U WITH ACUTE
    0xFB, 0x0171, //	LATIN SMALL LETTER U WITH DOUBLE ACUTE
    0xFC, 0x00FC, //	LATIN SMALL LETTER U WITH DIAERESIS
    0xFD, 0x00FD, //	LATIN SMALL LETTER Y WITH ACUTE
    0xFE, 0x0163, //	LATIN SMALL LETTER T WITH CEDILLA
    0xFF, 0x02D9, //	DOT ABOVE
    -1, -1};

NSEncodingRegistration(iso8859_2, kCFStringEncodingISOLatin2);
