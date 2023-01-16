#include <stdio.h>

int main(void)
{
	char name[] ="My first Name is Zion";
	for (int i = 0; name[i] != '\0'; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');

	return 0;
}
