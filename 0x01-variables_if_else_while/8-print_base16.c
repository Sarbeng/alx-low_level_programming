#include <stdio.h>
/**
 * main - Entry point
 * print all the numbers of base 16 in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/**
	 * assuming i can use any method
	 * initialize num and alphabet
	 * set num to 0 and alphabet to 'a'
	 * loop for num
	 * print num from 0 to 9 in loop
	 * loop for alphabet
	 * print alphabet from a to f in loop
	 * print next line outside loop
	 * return 0
	 */
	int num;
	char alphabet;
	
	num = 0;
	alphabet = 'a';
	/*loop for num*/
	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	/*loop for alphabet*/
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
