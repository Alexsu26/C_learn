#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *s = "Hello World";
	//s[0] = 'B';
	printf("s=%p\n", s);
	printf("Here!s[0]=%c\n",s[0]);
	return 0;
}