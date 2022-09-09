#include <stdio.h>
/**
 * main - Entry point
 *
 * print alphabets in small and then capitals
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;
	char Alphabet;

	alphabet = 'a';
	Alphabet = 'A';
	/*loop for small letters a to z*/
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	/*loop for capital letters A to Z*/
	while (Alphabet <= 'Z')
	{
		putchar(Alphabet);
		Alphabet++;
	}
	putchar('\n');
	return (0);
}
