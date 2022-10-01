#include "main.h"
/**
 * *_strncpy - copies a string.
 *
 * @dest: copy destination
 * @src: copy source
 *
 * @n: source end point
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * loop to copy src to dest
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/**
	 * it'll keep adding the null character till i = n
	 */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
