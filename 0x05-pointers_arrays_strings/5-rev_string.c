#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 *
 * @s - pointer to string
 */
void rev_string(char *s)
{
	/**
	 * variable declaration
	 */
	int i, len, temp;

	/*use stelen to get string length*/
	len = strlen(s);

	/**
	 * loop through string
	 */
	for (i = 0; i < len/2; i++)
	{
		/**
		 * temp variable holds the string
		 * we then proceed to swap the value of i 
		 * and the last value in the array of string
		 */
		temp = s[i];
		s[i] = s[len -i -1];
		s[len -i - 1] = temp;
	}
}
