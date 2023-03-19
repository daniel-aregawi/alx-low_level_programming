#include <stdio.h>
/**
* Main Entry
* Return Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l;
	/* SOme code goes here*/
	for (i = 0; i <= 9; i++)
		for (j = i+1; j <= 9; j++)
			for (k = j+1; k <= 9; k++)
				for (l = k+1; l <= 9; l++)
					printf("%d, %d, %d, %d", i, j, k, l);
	if (i != 9 || j != 8 || k != 7 || l != 6)
		putchar(',');
	putchar(' ');
	return (0);
}
