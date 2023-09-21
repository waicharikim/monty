#include "monty.h"

/**
 * main - monty bytecode interpreter
 * @argc: argument count
 * @argv: argument string
 *
 * return: 0 for success
 */

int main(int argc, char **argv)
{
	size_t n;

	arg_check(argc);
	file_read(argv[1]);

	for (n = 0; (getline(&file_arg->line_content, &n, file_arg->stream) != -1); )
	{
		file_arg->line_no += 1;
		printf("%s", file_arg->line_content);
	}
	return (0);
}
