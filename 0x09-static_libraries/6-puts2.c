#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 *
 * @str: pointer to string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	/**
	 * use while loop to print string
	 */
	while (*(str + i) != '\0')
	{
		/**
		 * print every other character
		 * starting from first
		 */
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		/**
		 * to prevent an infinite loop
		 */
		i++;
	}
	_putchar('\n');
}
