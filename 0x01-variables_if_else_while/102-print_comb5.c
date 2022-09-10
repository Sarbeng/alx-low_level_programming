#include <stdio.h>
/**
 * main - Entry point
 * print two combinations of digits
 * separated by comma and space
 * ascending order
 * only use putchar
 * cant use char
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2;

	/**
	 * for loop num 1
	 * for loop num 2
	 * print num1
	 * print num2
	 * if num1 == 9 && num2 == 9
	 * continue
	 * print comma
	 * print space
	 * print next line
	 * return 0
	 */
	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
