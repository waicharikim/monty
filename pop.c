#include "monty.h"

/**
 * pop - deletes the top element from a stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pop function is called.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (file_arg->stack_top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		file_close();
		free_tokens();
		free_args();
		exit(EXIT_FAILURE);
	}

	delete_node();
	file_arg->stack_len -= 1;
}
