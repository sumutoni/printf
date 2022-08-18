#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check_negative - checks if num is negative
 * @i: integer
 *
 * Return: that integer
 */
int check_negative(int i)
{
	int num;

	if (i < 0)
	{
		putchar('-');
		num = -i;
	}
	else
		num = i;
	return (num);
}
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
	num = check_negative(i);
	if (i == 0)
		return (0);
	count += print_num(num / 10);
	putchar((num % 10) + '0');
	count++;
	return (count);
}
