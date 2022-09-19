#include <unistd.h>
/**
 * _putchar - writes a character to standart output
 * ch - is the character to print
 *
 * Return: 1 on success
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
