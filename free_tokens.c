#include "monty.h"
/**
 * free_tokens - frees tokens
 *
 * Return: void
 */
void free_tokens(void)
{
	int i = 0;
	if (free_args->tokens == NULL)
		return;
	while (file_arg->tokens[i])
	{
		free(file_arg->tokens[i]);
		i++;
	}
	free(file_arg->tokens);
	file_arg->tokens = NULL;
}
