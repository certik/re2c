/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
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
	switch (yych) {
	case 'b':	goto yy5;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy6;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt2 = YYCURSOR;
		goto yy8;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy6;
	default:	goto yy4;
	}
yy6:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	case 'c':	goto yy6;
	default:	goto yy4;
	}
}

posix_captures/basic/53.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
