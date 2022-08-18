#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_num - prints an intger
 * @i: integer to print
 *
 * Return: number of digits printed
 */
int print_num(int i)
{
	int count, num;

	count = 0;
	num = i;
	if (i == 0)
		return (0);
	count += print_num(num / 10);
	putchar((num % 10) + '0');
	count++;
	return (count);
}
