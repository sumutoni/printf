#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_specifier - check which specifier corresponds to character
 * @c: character
 *
 * Return: index of corresponding specifier
 */
int check_specifier(char c)
{
	char specifier[4] = {'d', 'i', 'c', 's'};
	int i;

	i = 0;
	while (i < 4)
	{
		if (specifier[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
/**
 * search - search through string for specifier
 * @s: string to search through
 * @index: array to store position of specifier
 *
 * Return: pointer to array containing indices of specifer
 */
void search(const char *s, int *index)
{
	int counter, i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (check_specifier(s[i + 1]) >= 0)
			{
				index[0] = i;
				index[1] = i + 1;
				counter++;
				break;
			}
		}
		i++;
	}
	index[2] = counter;
}
