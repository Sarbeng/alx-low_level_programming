#include "main.h"
/**
 * *cap_string -  capitalizes all words of a string.
 *
 * @s: pointer to string to be Capitalized
 *
 * Return: s as value
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
		{
			if (s[i] == ' ' ||
				s[i] == '\t' ||
				s[i] == '\n' ||
				s[i] == ',' ||
				s[i] == '.')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
