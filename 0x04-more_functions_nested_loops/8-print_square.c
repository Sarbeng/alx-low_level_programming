#include "main.h"
/**
 * print_square - prints a square
 * followed bby new line
 *
 * @size: size of the square
 *
 * Return: 0 as success
 */
void print_square(int size)
{
	/**
	 * can only use putchar
	 * if size = 0 or less, print next line
	 * use # to print square
	 */
	int row, col;

	if (size > 0)
	{
		/*loop to print square*/
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			if (row == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
