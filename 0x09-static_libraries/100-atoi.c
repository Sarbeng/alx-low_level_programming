#include "main.h"
/**
 * _atoi - converts string to int
 *
 * @s: point to convert
 *
 * Return: int value of string
 */
int _atoi(char *s)
{
	int signs = 1;
	unsigned int n = 0;

	do {
		/**if first entry of s has - character*/
		if (*s == '-')
		{
			signs = signs * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
			break;
	} while (*s++);

	return (n * signs);
}
