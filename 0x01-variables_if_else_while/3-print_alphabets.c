#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;
	char upper_ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
		putchar(upper_ch);
	putchar('\n');
	return (0);
}
