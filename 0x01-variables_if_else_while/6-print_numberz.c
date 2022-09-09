#include <stdio.h>
/**
 * main - Entry point
 * print single digit numbers of base 10 from 0 to 9
 * followed by new line
 * cant use char
 * only use putchar and twice only
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int base10_num;

	base10_num = 0;
	while (base10_num < 10)
	{
		putchar(base10_num);
		base10_num++;
	}
	putchar('\n');
	return (0);
}
