#include "main.h"
#include <stdio.h>

/**
 * _printf - writes output to stdout
 * @format: const char pointer
 *
 * Return: number of characters printed out
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, count;

	i = 0;
	count = 0;
	va_start(list, format);
	count = replace(format, list);
	va_end(list);
	return (count);
}
