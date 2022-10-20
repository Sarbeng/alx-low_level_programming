#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int num;
	int hi_prime;
	int i;
	int j;

	num = 612852475143;

	/**
	 * i = 2, because 2 is the least prime factor
	 * any factor of a numbver is equal or less than num/2
	 */
	for (i = 2; i <= num / 2; i++)
	{
		/*check for factors of num*/
		if (num % i == 0)
		{
			/*check which factors are prime*/
			hi_prime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{

				}
			}
		}
	}

}
