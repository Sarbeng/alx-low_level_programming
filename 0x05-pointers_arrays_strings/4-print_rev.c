#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int len;

	len =  _strlen(s);
	while (len--)
	{
		_putchar(*(s + 1));
	}
	_putchar('\n');
}
