#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 * @n: number of elements to be printed
 * @a: array pointer
 */
void print_array(int *a, int n)
{
	int i;
	/*loop to print n elements from array*/
	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
