#include "main.h"
/**
 * free_stack_top - Frees the memory allocated for the stack_top
 *
 * Return: NULL;
 */

void free_stack_top(void)
{
	if (file_arg->stack_top)
		free_stack(file_arg->stack_top);

	file_arg->stack_top = NULL;
}
