#include "main.h"
#include <string.h>
/**
 * print_rev -  prints a string, in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int len = 0;

	/**
	 * while end of string not reached
	 * increase len
	 */
	while (s[len])
	{
		len++;
	}

	/**
	 * while len not = 0
	 */
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
