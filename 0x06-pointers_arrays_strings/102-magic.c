#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4}; /* Initialize array with values */
	int *p = &a[2]; /* Declare pointer and set it to third element of array */

	*(p + 1) = 98; /* Assign value of 98 to next element of p */
	print_array(a, 5); /* Print entire array */
	return (0);
}
