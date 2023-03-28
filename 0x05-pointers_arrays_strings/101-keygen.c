#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Generates random valid passwords for 101-crackme
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	    int i, sum, n;
	        char c;

		    srand(time(NULL));
		        sum = 0;

			    while (sum < 2772 - 122)
				        {
						        n = rand() % 127;
							        if (n > 32)
									        {
											            c = (char)n;
												                putchar(c);
														            sum += n;
															            }
								    }

			        putchar(2772 - sum);

				    return (0);
}
