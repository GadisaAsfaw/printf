#ifndef PRINTF_FUNC
#define PRINTF_FUNC

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *struct print_func - struct to select specific print function
 *@print_ft: format specifier
 *@p_func: pinter to function
 */
typedef struct print_func
{
	char print_ft;
	int (*p_func)(va_list l);
} pr_f;

int _printf(const char *format, ...);
void select_command(const char *format, va_list list, int *i, int *count,
		int *error);
int _putchar(char c);
int _printc(va_list l);
int _prints(va_list l);
int _print_num(va_list l);
#endif
