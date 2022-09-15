#include <stdio.h>
/**
 * main - Entry point
 *
 * prints numbers from 1 to 100
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;
	/*int space;*/

	/* print nos 1 to 100*/
	for (num = 1; num <= 100; num++)
	{
		/*for multiples of 3*/
		if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else 
		{
			printf("%d", num);
		}
		
		if (num < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	
	return (0);
}
