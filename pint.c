#include "monty.h"

/**
<<<<<<< HEAD
 * pint - prints value at top of a stack & exits if stack is empty
 * @stack: double pointer to the head of the stack
 * @line_number: 
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	**stack = *head
=======
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pint function is called.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (file_arg->stack_top == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", file_arg->stack_top->n);
}
>>>>>>> pilot
