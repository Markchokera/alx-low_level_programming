#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: String
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;

	int 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (0 = longi; 0 > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
