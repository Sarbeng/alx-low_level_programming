#include "main.h"
/**
 * swap_int - swap integer values using pointers
 *
 * @a: first int to be swapped
 * @b: 2nd int to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
