#include <stdio.h>
/**
 * main - Entry Point
 *
 * print all single digits of base 10, so 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int base10_num;

	base10_num = 0;
	while (base10_num < 10)
	{
		printf("%d", base10_num);
		base10_num++;
	}
	printf("\n");
	return (0);
}
