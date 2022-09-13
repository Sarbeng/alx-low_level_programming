#include "main.h"
/**
 * print_sign - prints the sign of params
 *
 * @n: this is the param being tested
 *
 * Return: 1 if + , 0 if 0 , -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
