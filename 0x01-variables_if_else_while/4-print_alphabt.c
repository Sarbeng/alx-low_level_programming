#include <stdio.h>
/**
 * main - Entry point
 *
 * Print all small alphabets except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
			/*alphabet++;*/
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
