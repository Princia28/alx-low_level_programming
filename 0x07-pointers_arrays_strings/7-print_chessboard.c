#include "main.h"
<<<<<<< HEAD



/**
 *
 *  * print_chessboard - prints the chess board
 *
 *   *
 *
 *    * @a: input pointer
 *
 *     *
 *
 *      * Return: return nothing
 *
 *      */

=======
>>>>>>> 14e3c9a063a303aa9c18c82710154a2803ea7eca

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
<<<<<<< HEAD
	
{

	int i, j;



	i = 0;

	j = 0;

	while (i < 64)

	{
	
			if (i % 8 == 0 && i != 0)
	
			{
			
						j = i;
			
						_putchar('\n');
			
					}
	
	
	
			_putchar(a[i / 8][i - j]);
	
			i++;
	
		}

	_putchar('\n');

=======
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
>>>>>>> 14e3c9a063a303aa9c18c82710154a2803ea7eca
}
