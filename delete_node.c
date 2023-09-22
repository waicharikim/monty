#include "monty.h"

/**
* delete_node - delete node at the top
* Return: void
*/

void delete_node(void)
{
	stack_t *tmp;

	tmp = file_arg->stack_top;
	file_arg->stack_top = tmp->next;
	free(tmp);
}
