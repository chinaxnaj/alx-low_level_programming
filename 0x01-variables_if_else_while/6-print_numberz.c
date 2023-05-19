#include <stdio.h>

/*
 * print numbers of base 10, starting from 0
 * follwed by a new line
 */

int main()
{
	int n = 0;

	for(n = 0; n < 10; n++);
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
