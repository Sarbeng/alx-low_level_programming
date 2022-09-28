#include "main.h"

/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: power
 * Return: -1 if y < 0 , x if y equals 1, 1 if equals 0
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}
