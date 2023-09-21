#include "monty.h"

/**
 *arg_check - checks args passed to monty
 *@argc: arg count
 *
 * Return: void
 */
void arg_check(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
