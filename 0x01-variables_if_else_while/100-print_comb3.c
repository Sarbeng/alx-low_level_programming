#include <stdio.h>
/**
 * main - Entry Point
 * Print all possible combinations of two digits
 * 01 and 10 and considered to be the same combination
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int num1, num2;

	/**
	 * loop to print combinations, it'll contain num1
	 * 2nd loop for num2
	 * add comma and space between numbers
	 * print next line
	 * return 0
	 */
	for (num1 = 0; num1 <= 8; num1++)
	{
		/*this loop makes sure the vaule of num1 and num2 never interchage*/
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			/*skip the comma and space if 8 and 9*/
			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
