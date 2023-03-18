#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return:  0 (Success)
*/
int main(void)
{
	printf("The size of char: %ld bytes.\n", sizeof(char));
	printf("The size of short: %ld bytes.\n", sizeof(short));
	printf("The size of int: %ld bytes.\n", sizeof(int));
	printf("The size of long: %ld bytes.\n", sizeof(long));
	printf("The size of long long: %ld bytes.\n", sizeof(long long));
	printf("The size of float: %ld bytes.\n", sizeof(float));
	printf("The size of double: %ld bytes.\n", sizeof(double));
	printf("The size of long double: %ld bytes.\n", sizeof(long double));
	return (0);
}
