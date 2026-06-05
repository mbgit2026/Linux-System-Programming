#include <stdio.h>

int main()
{
	char c;

	while (c = fgetc(stdin))
		fputc(c, stdout);
}
