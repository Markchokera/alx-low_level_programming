#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		putchar(45);
		n *= -1;
	}
	while ((n / div) >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		putchar((n / div) % 10 + '0');
		div /= 10;
	}
}
