#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers would go here */
/**
 * main - Entry point
 *
 * assign random number
 * check if zero, positive or negative
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if else comparison goes here  */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
