#include "main.h"

/**
 * *_memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to a memory address
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: @s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
