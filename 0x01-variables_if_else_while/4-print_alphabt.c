#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char current_char = 'a';
	/*here some code goes here .. */
	while (current_char <= 'z')
		if (current_char != 'e' && current_char != 'q')
			putchar(current_char);
	current_char++;
	putchar('\n');
	return (0);
}
