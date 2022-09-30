#include <stdio.h>
/**
 * main - will print its name followed by new line
 * @argc: count argument
 * @argv: array of arguments
 * Return: no return value
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
