/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycX: goto yyc_X;
	}
/* *********************************** */
yyc_X:
	goto yy1;
yy2:
	++YYCURSOR;
yy1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy2;
	default:	goto yy4;
	}
yy4:
	{x;}
}

bug2462777.ci.re:2: warning: rule in condition 'X' matches empty string [-Wmatch-empty-string]
