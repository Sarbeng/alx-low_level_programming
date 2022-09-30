#include <stdio.h>
/**
 * main - will print its name followed by new line
 * Return: no return value
 * @argc: argument counter
 * @argv: array of arguments
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
