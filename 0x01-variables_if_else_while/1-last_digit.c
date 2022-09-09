#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here*/
/**
 * main - Entry point
 * print last digit of a random number and compare it
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/*IF ELSE comparison goes here*/
	if (last_digit > 5)
	{
		printf("Last digit of  %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", last_digit, n);
	}
	else	
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);

}
