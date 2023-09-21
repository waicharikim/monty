#include "monty.h"
/**
 * free_stack - frees stack
 *
 * Return: void
 */
void free_stack(void)
{
	if (file_arg->stack_top)
		free_stack_top(free_arg->stackHead);

	free_arg->stack_top = NULL;
}
