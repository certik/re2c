/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'y':
		yyt1 = yyt2 = YYCURSOR;
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
	switch (yych) {
	case 'y':
		yyt2 = YYCURSOR;
		goto yy5;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy4:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy5:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'y':	goto yy6;
	default:	goto yy4;
	}
yy6:
	++YYCURSOR;
	goto yy4;
}

posix_captures/other/17.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
