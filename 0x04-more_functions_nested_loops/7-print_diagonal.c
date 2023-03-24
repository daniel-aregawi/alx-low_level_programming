#include "main.h"
/**
* print_diagonal - prints a diagonal line in the terminal
* @n: the number of times the '\' character is printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	return;
	for(int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			if (j == 1)
				_putchar('\\');
			else
				_putchar(' ');
	_putchar('\n');
}
