#include <stdio.h>

void DisplayASCII()
{
	for (unsigned int i = 0; i < 255; ++i)
	{
		printf("|%c\t\t| %d\t\t| %o\t\t| %X\t\t|\n", i, i, i, i );
	}
}
int main()
{
	DisplayASCII();
	return 0;
}