/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
	case 'c':
		yyt1 = YYCURSOR;
		goto yy5;
	default:
		yyt1 = yyt2 = YYCURSOR;
		goto yy4;
	}
yy4:
	yynmatch = 2;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[0] = yyt1 - 1;
	yypmatch[1] = YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
	case 'c':	goto yy5;
	default:
		yyt2 = YYCURSOR;
		goto yy4;
	}
}

posix_captures/basic/48.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
