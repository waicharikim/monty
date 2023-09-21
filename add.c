#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the add function is called.
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (file_arg->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
				line_number);
		file_close();
		free_tokens();
		free_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = file_arg->stack_top;
	tmp2 = tmp1->next;

	tmp2->n = tmp1->n + tmp2->n;
	delete_node();

	file_arg->stack_len -= 1;
}
