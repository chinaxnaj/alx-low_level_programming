#include"main.h"
#include<stdio.h>

/**
 * prin_line - Print linedependent on the integer n.
 * @n : The number of '_' characters to use
 * Return: void.
 */
 void print_line(int n)
 {
	 int i;
 
 	for (i= 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
 }
