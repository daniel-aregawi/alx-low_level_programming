#include <stdio.h>
/**
* main - Entry point
* Description: Prints all the numbers of base 16 in lowercase,
* followed by a new line, using only the putchar function exactly
* three times
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	/*Some code goes here*/
	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
