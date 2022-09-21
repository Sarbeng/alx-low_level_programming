#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if true or 1 if false
 */
int _strcmp(char *s1, char *s2)
{
	int check, i;

	check = 0;

	for ( i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			check = 1;
			break;
		}
	}
	if (check == 0)
	{
		return (0);
	}
	else
		return (1);
}
