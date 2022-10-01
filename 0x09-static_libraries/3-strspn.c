#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: first string string to check
 * @accept: second string to match
 * Return: count value of matching elements
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
