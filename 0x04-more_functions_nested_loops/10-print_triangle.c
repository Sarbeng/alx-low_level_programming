#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: height and size of triangle
 *
 * Return: no return value
 */
void print_triangle(int size)
{
	/* initialize height and space*/
	int height;
	int space;
	int tri;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			/*print spaces*/
			for (space = size - height; space > 0; space--)
			{
				_putchar(' ');
			}
			/*print hashes*/
			for (tri = 0; tri < height; tri++)
			{
				_putchar('#');
			}

			if (height == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
