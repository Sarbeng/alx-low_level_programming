#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @ld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
	int last;

	last = (ld % 10);

	if (last < 0)
	{
		last = (-1 * last);
	}
	_putchar(last + '0');
	return (last);
}
