#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	/**
	 * store length of dest into length
	 */
	length = 0; /***cos if we dont do this, errors will appear yikes***/
	while (dest[length] != '\0')
	{
		/**
		 * increasing length to end of string
		 */
		length++;
	}

	/**
	 * add dest to src
	 *
	 * set initial valu of i to 0
	 * if src hasnt reached end of string continue loop
	 * increase i and length(which we got from the while loop)
	 */
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}

	/**
	 * terminating with the null character
	 */
	dest[length] = '\0';
	return (dest);
}
