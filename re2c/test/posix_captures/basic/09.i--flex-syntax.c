/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy8;
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
yy6:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 2;
	yypmatch[3] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy8:
	switch (yych) {
	case 0x00:	goto yy6;
	case 'a':	goto yy7;
	default:	goto yy5;
	}
}

posix_captures/basic/09.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
