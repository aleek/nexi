
int
main()
{
	int i = 0;
	char *ptr;
	ptr = (char*)0x500;
	for (i = 0; i<128; ++i) {
		*ptr = i;
	}
	return 0;
}
