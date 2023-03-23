#include <stdio.h>
/**
 * main-main block
 * Description: computers and prints the sum of all the multple of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0,b = 1,next;

	white(i < 50)
	{
		next = a+b;
		a = b;
		b = next;
		printf("%lu",next);

		if (i < 49)
		{
			printf(",");
		}
		i++;
	}
	putchar('\n');
	return(0);
}
