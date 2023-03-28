#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 *  @c: The characteer to be checked.
 *
 *  Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
