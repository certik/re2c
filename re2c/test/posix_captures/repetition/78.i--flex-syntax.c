/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt5 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt1 = yyt5 = YYCURSOR;
		goto yy7;
	case 'd':
		yyt3 = yyt5 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy9;
	default:
		yyt2 = yyt3 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy11;
	case 'c':
		yyt5 = YYCURSOR;
		goto yy7;
	case 'd':
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	default:
		yyt2 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy12;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt3 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy2;
	} else {
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy7:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt2 = yyt5;
		yyt5 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt5 = YYCURSOR;
		goto yy7;
	case 'd':
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	default:
		yyt2 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy9;
	default:
		yyt2 = yyt5;
		goto yy2;
	}
yy11:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt2 = yyt5;
		yyt5 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy13;
	case 'd':
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	default:
		yyt2 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy7;
	default:	goto yy6;
	}
yy13:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt5 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt5 = YYCURSOR;
		goto yy7;
	case 'd':
		yyt5 = yyt3;
		goto yy7;
	default:
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/repetition/78.i--flex-syntax.re:5: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/78.i--flex-syntax.re:6: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/78.i--flex-syntax.re:6: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
