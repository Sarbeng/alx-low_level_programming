#include <stdio.h>
/**
 * main - Entry point
 * Print possible combinations of three digits
 * cant use the same combination
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2, num3;

	/**
	 * for loop, initialize num1
	 * for loop, initialiaze num2
	 * for loop initialize num3
	 * print num1
	 * print num2
	 * print num3
	 * if num is 7, num2 is 8 , num3 is 9
	 * continue
	 * print ,
	 * print space
	 * print next line
	 * return 0
	 */

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 == 7 && num2 == 8 && num3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}