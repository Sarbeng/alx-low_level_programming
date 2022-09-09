#include <stdio.h>
/**
 * main - Entry Point
 *
 * print alphabets in reverse
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	/**
	 * first initialize char
	 * set char to z
	 * loop from z to a
	 * reduce value for z with each loop
	 * print next line
	 * return 0
	 */
	char rev;

	rev = 'z';
	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
