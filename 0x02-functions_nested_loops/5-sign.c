#include "main.h"


 /**
 * This function determines the sign of a number and prints it to the console.
 *
 * @n: The number whose sign is to be determined.
 *
 * Returns 1 if the number is positive, 0 if the number is zero, and -1 if the number is negative.
 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

