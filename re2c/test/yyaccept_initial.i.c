/* Generated by re2c */
// In this example initial state coincides with fallback state
// which must update 'yyaccept'. There is a loop through initial
// state that changes 'yyaccept' value, so if the initial state
// forgets to update 'yyaccept', the wrong rule will match.


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	goto yy0;
yy1:
	yyaccept = 0;
	++YYCURSOR;
yy0:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
	{ 1 }
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy6;
	}
yy5:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:	goto yy6;
	}
yy6:
	{ 2 }
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy1;
	default:	goto yy4;
	}
}

yyaccept_initial.i.re:8: warning: rule matches empty string [-Wmatch-empty-string]
yyaccept_initial.i.re:9: warning: rule matches empty string [-Wmatch-empty-string]
