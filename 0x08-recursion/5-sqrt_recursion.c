#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: finds the square root of a no
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}

/**
 * sqr - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int sqr(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return  (sqr(n, val + 1));
else
	return (-1);

}
