#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers between 0-9 incl.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}

	putchar('\n');
}
