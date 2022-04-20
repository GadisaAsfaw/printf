#include "main.h"
/**
 *get_print_func - a function that returns a prefered function pointer
 *@fc: a char to select respective function pointer
 *Return: a pointer to a function
 */
int (*get_print_func(char fc))(va_list l, flags_t *f)
{
	int len, i;

	pr_f func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_big},
		{'S', print_bigS},
		{'p', print_address},
	};

	/*len = sizeof(func_arr) / sizeof(pr_f);*/
	len = 11;
	for (i = 0; i < len; i++)
	{
		if (func_arr[i].ft == fc)
			return (func_arr[i].p_func);
	}
	return (NULL);
}
