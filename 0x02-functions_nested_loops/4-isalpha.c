#include "main.h"
/**
 * _isalpha - checks if alphabet
 *
 * @c: is the parameter being checked
 *
 * Return: 1 as true, 0 as false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
