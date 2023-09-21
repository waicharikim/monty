#include "monty.h"

/**
 * is_digit - Checks if a string is an integer.
 * @token: The string to check.
 * Return: 1 if the string is a valid number, 0 otherwise.
 */

int is_digit(char *token)
{
	int i = 0;

	while (token[i])
	{
		if (i == 0 && token[i] == '-' && token[i + 1])
		{
			i++;
			continue;
		}
		if (token[i] < '0' || token[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
