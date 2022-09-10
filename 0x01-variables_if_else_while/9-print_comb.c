#include <stdio.h>
/**
 * main - Entry point
 *
 * prints all possible combinations of single-digit numbers.
 * number separated by , then space
 * numbers in ascending order
 * use only putchar and 4 times at most
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/**
	 * initialize num
	 * set num to zero
	 * loop to print numbers
	 *	print num
	 *	print comma
	 *	print space
	 *	num++
	 * print next line
	 * return 0
	 */
	int num;

	num = 0;
	while (num < 10)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
