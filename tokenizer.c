#include "monty.h"

/**
 * tokenizer - tokenize lines from file
 *
 * Return: NULL
 */
void tokenizer(void)
{
	int i = 0;
	char *delimiter = " \n", *token = NULL, *content2 = NULL;

	content2 = malloc(sizeof(char) * (strlen(file_arg->line_content) + 1));
	strcpy(content2, file_arg->line_content);
	file_arg->token_count = 0;
	token = strtok(content2, delimiter);
	while (token)
	{
		file_arg->token_count += 1;
		token = strtok(NULL, delimiter);
	}
	file_arg->tokens = malloc(sizeof(char *) * (file_arg->token_count + 1));
	strcpy(content2, file_arg->line_content);
	token = strtok(content2, delimiter);
	while (token)
	{
		file_arg->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (file_arg->tokens[i] == NULL)
			malloc_fail();
		strcpy(file_arg->tokens[i], token);
		token = strtok(NULL, delimiter);
		i++;
	}
	file_arg->tokens[i] = NULL;
	free(content2);
}
