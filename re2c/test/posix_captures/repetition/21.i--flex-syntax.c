/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych >= 0x01) {
		yyt4 = yyt5 = NULL;
		yyt1 = yyt2 = yyt6 = YYCURSOR;
		goto yy3;
	}
	yyt2 = yyt3 = yyt4 = yyt5 = yyt6 = yyt7 = NULL;
	yyt1 = YYCURSOR;
yy2:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[5] = yyt5;
	yypmatch[6] = yyt6;
	yypmatch[7] = yyt7;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) {
		yyt3 = yyt7 = YYCURSOR;
		goto yy2;
	}
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) {
		yyt4 = yyt2;
		yyt6 = yyt7 = NULL;
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
	yyt4 = yyt5 = NULL;
	yyt2 = yyt6 = YYCURSOR;
	goto yy3;
}

posix_captures/repetition/21.i--flex-syntax.re:5: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/21.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/21.i--flex-syntax.re:6: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
