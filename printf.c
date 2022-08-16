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

	va_start(list, format);
	replace(format, list);
	va_end(list);
	return (0);
}
