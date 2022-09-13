#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10x
 *
 */
void print_alphabet_x10(void)
{
	char letter_x10;
	int count;

	for (count = 0; count <= 10; count++)
	{
		/* second for loop to print the values*/
		for (letter_x10 = 'a'; letter_x10 <= 'z'; letter_x10++)
		{
			_putchar(letter_x10);
		}
		_putchar('\n');
	}
}
