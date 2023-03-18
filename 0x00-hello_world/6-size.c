#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return:  0 (Success)
*/
int main(void)
{
	printf("The size of char: %lu bytes.\n", sizeof(char));
	printf("The size of int: %lu bytes.\n", sizeof(int));
	printf("The size of long: %lu bytes.\n", sizeof(long int));
	printf("The size of long long: %lu bytes.\n", sizeof(long long int));
	printf("The size of float: %lu bytes.\n", sizeof(float));
	return (0);
}
