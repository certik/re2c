/* Generated by re2c */
#line 1 "bug1454253.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RET(n) return n

size_t scan(const char *s, int l, char *r)
{
	const char *p = s;
	const char *q;
	#define YYCTYPE         char
	#define YYCURSOR        p
	#define YYLIMIT         (s+l)
	#define YYMARKER        q
	#define YYFILL(n)

	while(1)
	{

#line 23 "bug1454253.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy3;
	case '?':	goto yy7;
	default:	goto yy5;
	}
yy2:
#line 40 "bug1454253.re"
	{
		*r++ = '0';
		*r++ = '\0';
		return p - s;
	}
#line 40 "bug1454253.c"
yy3:
	++YYCURSOR;
#line 34 "bug1454253.re"
	{
		*r++ = '3';
		*r++ = '\0';
		return p - s;
	}
#line 49 "bug1454253.c"
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:
	case '?':	goto yy2;
	default:	goto yy5;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case '!':	goto yy9;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy12;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy2;
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy11;
	}
yy11:
#line 24 "bug1454253.re"
	{
		*r++ = '1';
		continue;
	}
#line 205 "bug1454253.c"
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy12;
	default:	goto yy14;
	}
yy14:
#line 29 "bug1454253.re"
	{
		*r++ = '2';
		continue;
	}
#line 281 "bug1454253.c"
}
#line 45 "bug1454253.re"

	}
}

void _do_scan(const char * str, size_t str_len, size_t scn_len, const char * exp, size_t exp_len)
{
	char res[32], sp[32];
	size_t res_len, inp_len;

	inp_len = scan(str, str_len, res);
	res_len = strlen(res);
	
	memset(sp, ' ', sizeof(sp));
	sp[15 - str_len] = '\0';

	printf("[%s](%2d/%2d)%s: %8s(%d) %s %8s(%d)\n", str, inp_len, scn_len, sp, 
			res, res_len, 
			inp_len != scn_len || exp_len != res_len || strncmp(exp, res, exp_len) ? "!=" : "==", 
			exp, exp_len);
}

#define do_scan(str, scn_len, exp) _do_scan(str, sizeof(str) - 1, scn_len, exp, sizeof(exp) - 1)

main()
{
	do_scan("?1??",         2, "20");
	do_scan("#",            1, "0");
	do_scan("##",           2, "0");
	do_scan("##?",          2, "0");
	do_scan("##|",          3, "0");
	do_scan("?!|",          3, "10");
	do_scan("?!?1|",        5, "120");
	do_scan("?!?a+",        5, "120");
	do_scan("?2!1?2??",     4, "20");
	do_scan("?1?2!1?2??",   6, "220");
	do_scan("?1?2?!1?2??",  9, "22120");
	do_scan("?1?2?!1?2?!", 12, "221213");
	do_scan("?1?123?45??",  9, "2220");
	do_scan("?1?123?45?!", 12, "22213");
}
bug1454253.re:40: warning: rule matches empty string [-Wmatch-empty-string]
