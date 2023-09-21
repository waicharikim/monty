#include "monty.h"
/**
 * open_instructions - run instruction function for matching opcode
 *
 * Return: void
 */
void open_instructions(void)
{
	stack_t *stack = NULL;

	if (file_arg->token_count == 0)
		return;
	file_arg->instruction->f(&stack, file_arg->line_no);
}
