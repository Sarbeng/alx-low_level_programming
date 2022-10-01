#include "main.h"
/**
 * _strpbrk - locates where the chars of @s and @accept match
 * @s: first string
 * @accept: second string to be checked
 * Return: pointer to s[] that matches accept[]
 * or nulll if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (0);
}
