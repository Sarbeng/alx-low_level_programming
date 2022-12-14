#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * function protoypes go here
 */

/**
 * _isupper - checks for uppercase
 */
int _isupper(int c);

/**
 * isdigit - checks if its digit
 * for digits 0 to 9
 */
int _isdigit(int c);

/**
 * mul - multiplies two numbers
 */
int mul(int a, int b);

/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void);

/**
 * _putchar - print character
 */
int _putchar(char ch);

/**
 * print_most_numbers - prints numbers 0 to 9 
 * except 2 and 4
 */
void print_most_numbers(void);

/**
 * print 0 to 14 , ten times
 */
void more_numbers(void);

/** 
 * print  a straight line
 */
void print_line(int n);

/**
 * print_diagonal - raws a diagonal line on the terminal.
 */
void print_diagonal(int n);

/**
 * prints a square follwed by a new line
 */
void print_square(int size);

/**
 * prints a triangle followed by new line
 */
void print_triangle(int size);

#endif
