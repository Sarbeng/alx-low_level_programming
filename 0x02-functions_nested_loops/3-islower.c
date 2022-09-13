#include "main.h"
/**
 * _islower - checks whether lowercase
 *
 * int c - int value to check for
 *
 * Return: 0 if false 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
