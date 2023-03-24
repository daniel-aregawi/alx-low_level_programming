#include "main.h"

/**
*_isdigit - checks for a digit.
* @c: the integer value of a character to be tested
* Return: 1 if c is a digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
