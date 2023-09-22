#include "monty.h"

/**
 * main - monty bytecode interpreter
 * @argc: argument count
 * @argv: argument string
 *
 * return: 0 for success
 */
file_t *file_arg;
int main(int argc, char **argv)
{
	size_t n = 0;

	arg_check(argc);
	file_read(argv[1]);

	for (; (getline(&file_arg->line_content, &n, file_arg->stream) != -1); )
	{
		file_arg->line_no += 1;
		tokenizer();
		check_instructions();
		open_instructions();
		free_tokens();
	}
	file_close();
	free_args();
	return (0);
}
