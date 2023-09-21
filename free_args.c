#include "monty.h"

/**
 * free_args - frees memory
 *
 * Return: void
 */
void free_args(void)
{
	if (file_arg == NULL)
		return;
	if (file_arg->instruction)
	{
		free(file_arg->instruction);
		file_arg->instruction = NULL;
	}

	free_stack();

	if (file_arg->line_content)
	{
		free(file_arg->line_content);
		file_arg->line_content = NULL;
}

free(file_arg);
}
