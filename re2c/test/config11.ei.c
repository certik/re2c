/* Generated by re2c */
unsigned char scan(const unsigned char *s)
{
	unsigned char* cr;
	unsigned char  ch;

{
	unsigned char ch;
	ch = *cr;
	switch (ch) {
	case 0x81:	goto yy3;
	case 0x82:	goto yy5;
	default:	goto yy2;
	}
yy2:
yy3:
	++cr;
	return 'a';
yy5:
	++cr;
	return 'b';
}

}
config11.ei.re:16: warning: control flow is undefined for strings that match '[\x0-\x80\x83-\xFF]', use default rule '*' [-Wundefined-control-flow]
