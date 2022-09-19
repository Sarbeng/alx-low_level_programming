#include "main.h"
/**
 * _puts - prints string followed by new line
 *
 * @str: points to string
 */
void _puts(char *str)
{
	int i;
	int out;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		out = *(str + i);
		_putchar(out);
	}
	_putchar('\n');
}
