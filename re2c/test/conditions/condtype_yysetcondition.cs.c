/* Generated by re2c */
#line 1 "conditions/condtype_yysetcondition.cs.re"
#include <stdio.h>

// changing this to '#if 1' changes program behaviour
#if 0
#    define yyca 1
#    define yycb 0
#else
#    define yyca 0
#    define yycb 1
#endif

int main ()
{
	int cond = yyca;
	char * YYCURSOR = "aaaaaaaabb";
#define YYSETCONDITION(c) cond = c
#define YYGETCONDITION() cond
	for (;;)
	{

#line 24 "conditions/condtype_yysetcondition.cs.c"
{
	unsigned char yych;
	if (YYGETCONDITION() < 1) {
		goto yyc_b;
	} else {
		goto yyc_a;
	}
/* *********************************** */
yyc_b:
	yych = *YYCURSOR++;
#line 24 "conditions/condtype_yysetcondition.cs.re"
	{ printf ("b\n"); break; }
#line 37 "conditions/condtype_yysetcondition.cs.c"
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy9;
	++YYCURSOR;
	YYSETCONDITION(yycb);
#line 27 "conditions/condtype_yysetcondition.cs.re"
	{ printf ("a => b\n"); continue; }
#line 46 "conditions/condtype_yysetcondition.cs.c"
yy9:
	++YYCURSOR;
#line 26 "conditions/condtype_yysetcondition.cs.re"
	{ printf ("a\n");      continue; }
#line 51 "conditions/condtype_yysetcondition.cs.c"
}
#line 28 "conditions/condtype_yysetcondition.cs.re"

	}
	return 0;
}
conditions/condtype_yysetcondition.cs.re:28: warning: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
