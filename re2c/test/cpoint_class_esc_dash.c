/* Generated by re2c */
#line 1 "cpoint_class_esc_dash.re"

#line 5 "cpoint_class_esc_dash.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '-':
	case 'a':
	case 'c':	goto yy3;
	default:	goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
#line 2 "cpoint_class_esc_dash.re"
	{}
#line 21 "cpoint_class_esc_dash.c"
}
#line 3 "cpoint_class_esc_dash.re"

cpoint_class_esc_dash.re:3: warning: control flow is undefined for strings that match '[\x0-\x2C\x2E-\x60\x62\x64-\xFF]', use default rule '*' [-Wundefined-control-flow]
