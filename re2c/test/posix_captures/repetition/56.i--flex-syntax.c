/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 8) YYFILL(8);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'X':
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
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy6;
	default:	goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy7;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy9;
	default:	goto yy8;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy9;
	default:	goto yy8;
	}
yy7:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy11;
	default:	goto yy10;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy11;
	default:	goto yy10;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy13;
	default:	goto yy12;
	}
yy11:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy13;
	default:	goto yy12;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy15;
	default:	goto yy14;
	}
yy13:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy15;
	default:	goto yy14;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'Y':
		yyt3 = yyt4 = YYCURSOR;
		goto yy18;
	default:	goto yy17;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt3 = yyt4 = YYCURSOR;
		goto yy18;
	default:
		yyt4 = YYCURSOR;
		goto yy16;
	}
yy16:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy17:
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy19;
	default:
		yyt4 = YYCURSOR;
		goto yy16;
	}
yy18:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'Y':
		yyt2 = yyt3 = YYCURSOR;
		goto yy19;
	default:	goto yy20;
	}
yy19:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy20:
	switch (yych) {
	case 0x00:
		yyt2 = yyt4;
		goto yy7;
	case 'Y':
		yyt4 = yyt2;
		yyt2 = yyt3 = YYCURSOR;
		goto yy19;
	default:
		yyt2 = yyt4;
		yyt4 = YYCURSOR;
		goto yy16;
	}
}

posix_captures/repetition/56.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
