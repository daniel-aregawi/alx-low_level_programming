#include "holberton.h"
/**
 *  * _atoi - Converts a string to an integer
 *   * @s: The string to be converted
 *    *
 *     * Return: The integer value of the converted string
 *      */
int _atoi(char *s)
{
	    int sign = 1;
	        int res = 0;
		    int i = 0;

		        while (s[i] == ' ')
				        i++;

			    if (s[i] == '-')
				            sign = -1, i++;
			        else if (s[i] == '+')
					        i++;

				    while (s[i] >= '0' && s[i] <= '9')
					        {
							        if (res > 2147483647 / 10 || (res == 2147483647 / 10 && s[i] - '0' > 7))
									        {
											            if (sign == 1)
													                    return (2147483647);
												                else
															                return (-2147483648);
														        }
								        res = res * 10 + s[i] - '0';
									        i++;
										    }

				        return (sign * res);
}
