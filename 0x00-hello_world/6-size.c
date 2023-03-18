#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char:%d bytes\n", sizeof(char));
    printf("Size of int:%d bytes\n", sizeof(int));
    printf("Size of short:%d bytes\n", sizeof(short int));
    printf("Size of long:%d bytes\n", sizeof(long int));
    printf("size of long:%d bytes\n", sizeof(long long int));
    printf("Size of float:%d bytes\n", sizeof(float));
    return 0;
}
