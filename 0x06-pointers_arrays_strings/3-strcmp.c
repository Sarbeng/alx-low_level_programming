#include "main.h"
/**
 * _strcmp - compares pointers to  two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: if s1 < s2, the negative difference of the
 * the first unmatched characters
 *	if s1 == s2, return 0
 *	if s1 > s2, return positive difference of first umatched chars
 *
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
