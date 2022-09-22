#include "main.h"
/**
 * *string_toupper - changes all lowercase of a string
 * to upper
 * it takes all pointer values
 * and returns all lowercase to upper by subtracting the ascii
 * by 32
 *
 * @s: string pointer to change to upper
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/**
		 * if lowercase subtract 32 from array element
		 */
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
