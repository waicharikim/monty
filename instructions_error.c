#include "monty.h"
/**
 * instructions_error - handles invalid instruction
 *
 * Return: void
 */
void instructions_error(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", file_arg->line_no, file_arg->tokens[0]);
	file_close();
	free_tokens();
	free_args();
	exit(EXIT_FAILURE);
}
