/* Generated by re2c */
#include <limits.h>
#include <stdio.h>

template<int base>
static bool adddgt(unsigned long &u, unsigned int d)
{
    if (u > (ULONG_MAX - d) / base) {
        return false;
    }
    u = u * base + d;
    return true;
}

static bool lex(const char *s, unsigned long &u)
{
    const char *YYMARKER;
    const char *YYCTXMARKER;
    u = 0;

    

    
{
	char yych;
	yych = *s;
	switch (yych) {
	case '0':	goto yy4;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy6;
	default:	goto yy2;
	}
yy2:
	++s;
	{ return false; }
yy4:
	yych = *(YYMARKER = ++s);
	switch (yych) {
	case 'B':
	case 'b':	goto yy8;
	case 'X':
	case 'x':	goto yy10;
	default:	goto yy5;
	}
yy5:
	{ goto oct; }
yy6:
	++s;
	s -= 1;
	{ goto dec; }
yy8:
	yych = *++s;
	switch (yych) {
	case '0':
	case '1':	goto yy11;
	default:	goto yy9;
	}
yy9:
	s = YYMARKER;
	goto yy5;
yy10:
	yych = *++s;
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
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy13;
	default:	goto yy9;
	}
yy11:
	++s;
	s -= 1;
	{ goto bin; }
yy13:
	++s;
	s -= 1;
	{ goto hex; }
}


bin:
    
{
	char yych;
	yych = *s;
	switch (yych) {
	case 0x00:	goto yy17;
	case '0':
	case '1':	goto yy21;
	default:	goto yy19;
	}
yy17:
	++s;
	{ return true; }
yy19:
	++s;
	{ return false; }
yy21:
	++s;
	{ if (!adddgt<2>(u, s[-1] - '0')) return false; goto bin; }
}


oct:
    
{
	char yych;
	yych = *s;
	switch (yych) {
	case 0x00:	goto yy25;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy29;
	default:	goto yy27;
	}
yy25:
	++s;
	{ return true; }
yy27:
	++s;
	{ return false; }
yy29:
	++s;
	{ if (!adddgt<8>(u, s[-1] - '0')) return false; goto oct; }
}


dec:
    
{
	char yych;
	yych = *s;
	switch (yych) {
	case 0x00:	goto yy33;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy37;
	default:	goto yy35;
	}
yy33:
	++s;
	{ return true; }
yy35:
	++s;
	{ return false; }
yy37:
	++s;
	{ if (!adddgt<10>(u, s[-1] - '0')) return false; goto dec; }
}


hex:
    
{
	char yych;
	yych = *s;
	switch (yych) {
	case 0x00:	goto yy41;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy45;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':	goto yy47;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy49;
	default:	goto yy43;
	}
yy41:
	++s;
	{ return true; }
yy43:
	++s;
	{ return false; }
yy45:
	++s;
	{ if (!adddgt<16>(u, s[-1] - '0'))      return false; goto hex; }
yy47:
	++s;
	{ if (!adddgt<16>(u, s[-1] - 'A' + 10)) return false; goto hex; }
yy49:
	++s;
	{ if (!adddgt<16>(u, s[-1] - 'a' + 10)) return false; goto hex; }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        unsigned long u;
        if (lex(argv[i], u)) {
            printf("%lu\n", u);
        } else {
            printf("error\n");
        }
    }
    return 0;
}
04_parsing_integers_blocks.i.re:32: warning: rule matches empty string [-Wmatch-empty-string]
