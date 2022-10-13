#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);


typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;


#endif /* _VARIADIC_FUNCTIONS_H_ */
