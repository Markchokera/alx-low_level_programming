#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			putchar(' ');

		for (j = 0; j < i + 1; j++)
			putchar('#');

		putchar('\n');
	}
}
