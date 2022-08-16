#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_size - counts number of characters in string
 * @s: string
 *
 * Return: number of characters in string
 */
int get_size(const char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
	}
	return (counter);
}
/**
 * replace - replace specifier by its corresponding value
 * @s: string with specifier
 * @list: lsit containing arguments
 */
void replace(const char *s, va_list list)
{
	int *indices, i, j;

	spec spec_array[4] = {{'d', print_int, 0},
			{'i', print_int, 1},
			{'c', print_char, 2},
			{'s', print_string, 3}};

	i = 0;
	j = 0;
	indices = search(s);
	while (s[i] != '\0')
	{
		if (i != indices[0])
		{
			putchar(s[i]);
		}
		if (i == indices[0])
		{
			j = indices[1];
			spec_array[j].point(list);
		}
		i += 1;
		indices = search((s + i));
	}
	if (s[i] == '\0')
	putchar('\n');
}
