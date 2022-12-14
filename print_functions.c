#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * print_char - prints a character to stdout
 * @list: va_list holding arguments
 *
 * Return: 1 for number of char printed
 */
int print_char(va_list list)
{
	char c;
	int count;

	count = 0;
	c = va_arg(list, int);
	count = 1;
	putchar(c);
	return (count);
}
/**
 * print_int - prints integer to stdout
 * @list: va_list containing arguments
 *
 * Return: number of digits printed
 */
int print_int(va_list list)
{
	int c;
	int count;

	c = va_arg(list, int);
	if (c == 0)
		count = print_zero();
	else
		count = print_num(c);
	return (count);
}
/**
 * print_string - prints string to stdout
 * @list: va_list containing arguments
 *
 * Return: number of character printed
 */
int print_string(va_list list)
{
	char *string;
	int count;

	string = va_arg(list, char *);
	if (!string)
	{
		string = "null";
		count = write(1, " ", 0);
	}
	else
	{
		count = strlen(string);
		while (*string != '\0')
		{
			putchar(*string);
			string++;
		}
	}
	return (count);
}
