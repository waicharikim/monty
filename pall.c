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
	tmp = file_arg->stack-top;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
