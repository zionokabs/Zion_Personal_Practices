#include <stdio.h>

int main(void)
{
	char name[] ="Name";
	for (int i = 0; name[i] != '\0'; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');

	return 0;
}
