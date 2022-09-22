#include "main.h"

/**
<<<<<<< HEAD
 *
 * print_number - prints an integer
 * @n: integer to be printed
 *
 */

=======
* print_number - prints an integer
* @n: integer to be printed
*
*/
>>>>>>> 05b05757f73b8b3b8d335ab89b53d653616296ef
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
