#include "monty.h"

/**
 * file_read_error - handles file reading error
 * @file_name: path to file
 *
 * Return: void
 */

void file_read_error(char *file_name)
{
	fprintf(stderr, " Error: Can't open file %s\n", file_name);
	exit(EXIT_FAILURE);
}
