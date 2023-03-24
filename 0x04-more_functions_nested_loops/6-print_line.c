#include "main.h"
/**
 * main -the program prints a straight line with new line 
 * Return: always 0
*/
void print_line(int n)
{
	if (n <= 0) // If n is less than or equal to 0, just print a newline character
		_putchar('\n');
	return;
	for (int i = 0; i < n; i++) // Loop n times and print a character '_' on each iteration
		_putchar('_');
	_putchar('\n'); // Print a newline character at the end of the line
}
