/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy3;
	}
	yyt1 = yyt2 = YYCURSOR;
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = YYCURSOR;
		goto yy2;
	}
	goto yy3;
}

posix_captures/glennfowler/38.i--flex-syntax.re:5: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/38.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/38.i--flex-syntax.re:6: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
