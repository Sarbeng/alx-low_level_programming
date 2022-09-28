#ifndef _MAIN_H_
#define _MAIN_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

/**
 * prints a character to the screen
 */
int _putchar(char c);

/**
 * print a string without using a loop, just a recursive function
 */
void _puts_recursion(char *s);

/**
 * function that prints a string in reverse.
 */
void _print_rev_recursion(char *s);

/**
 * function that returns the length of a string.
 */
int _strlen_recursion(char *s);

/**
 *  function that returns the factorial of a given number.
 */
int factorial(int n);

/**
 * function that returns the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y);

/**
 *  function that returns the natural square root of a number.
 */
int _sqrt_recursion(int n);

/**
 * function that returns 1 if the input integer is a prime number
 * otherwise return 0.
 */
int is_prime_number(int n);

#endif /* _MAIN_H_ */
