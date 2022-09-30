#include <stdio.h>
/**
 * main - Entry point
 * @argc: - argument counter
 * @argv: - argument array in a string
 *
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
