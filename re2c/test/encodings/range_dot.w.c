/* Generated by re2c */
#line 1 "encodings/range_dot.w.re"

#line 5 "encodings/range_dot.w.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych != '\n') goto yy3;
yy3:
	++YYCURSOR;
#line 2 "encodings/range_dot.w.re"
	{return 0;}
#line 15 "encodings/range_dot.w.c"
}
#line 3 "encodings/range_dot.w.re"

re2c: warning: line 3: control flow is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]