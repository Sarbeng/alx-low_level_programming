#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * if even print last half,
 * if odd print last half where
 * n = (length_of_the_string - 1) / 2
 *
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int i, len, half;

	/**
	 * initialize len
	 */
	len = strlen(str);
	half = len / 2;

	/**
	 * iterate through sring
	 */
	for (i = half; *(str + i) != '\0'; i++)
	{
		/**
		 * if odd
		 */
		if (len % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

