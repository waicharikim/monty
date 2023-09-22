#include "monty.h"

/**
* free_stack - free the nodes in a stack list
* @top: first node of a dlistint link
* Return: void
*/
void free_stack(stack_t *top)
{
	if (top == NULL)
		return;

	if (top->next != NULL)
	{
		free_stack(top->next);
	}

	free(top);
}
