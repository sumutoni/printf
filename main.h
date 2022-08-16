#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define NULL ((void *)0)
/**
 * struct specifier - structure for specifier symbol, index in array,
 * and function to print corresponding value
 * @s: symbol of specifier
 * @point: pointer to printing function
 * @index: index in array
 */
typedef struct specifier
{
	char s;
	int (*point)(va_list);
	int index;
} spec;
int _printf(const char *format, ...);
void *search(const char *, int *);
int replace(const char *, va_list);
int check_specifier(char c);
int print_int(va_list);
int print_char(va_list);
int print_string(va_list);

#endif
