/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
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
	++YYCURSOR;
	yyt2 = YYCURSOR;
	yynmatch = 2;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[0] = YYCURSOR - 1;
	yypmatch[1] = YYCURSOR;
	{}
}

posix_captures/other/04.i--flex-syntax--posix-closure(gtop).re:6: warning: rule matches empty string [-Wmatch-empty-string]
