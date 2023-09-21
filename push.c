#include "monty.h"
/**
 * push - pushes an integer ontop of the stack
 * @stack: pointer to stack
 * @line_number: line number with opcode
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (file_arg->token_count <= 1 || !(is_digit(file_arg->tokens[1])))
	{
		free_args();
		fprintf(stderr, "L%d: Usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_fail();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(file_arg->tokens[1]);

	if (file_arg->stack_top == NULL)
	{
		file_arg->stack_top = *stack;
	}
	else
	{
		if (file_arg->q_or_s)
		{
			(*stack)->next = line_arg->stack_top;
			file_arg->stack_top->prev = *stack;
			file_arg->stack_top = *stack;
		}
		else
		{
			stack_t *tmp = file_arg->stack_top;

			while (tmp->next)
				tmp = tmp->next;
			tmp->next = *stack;
			(*stack)->prev = tmp;
		}
	}
	file_arg->stack_len += 1;
}

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (file_arg->stack_top == NULL)
		return;

	(void) line_number;
	(void) stack;

	tmp = file_arg->stack_top;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
