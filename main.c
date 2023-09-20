#include "monty.h"

/**
 * main - main program entry
 * @argc: argument count
 * @argv: argument string
 *
 * return: 0 for success
 */
void arg_check(int);

int main(int argc, char __attribute__((unused)) **argv)
{
	arg_check(argc);
	file_check(argv[1]);
	return 0;
}

void arg_check(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

char *file_check(char *file_name)
{
	file_arg = malloc(sizeof(file_t));
	if (file_arg == NULL)
		malloc_fail();
	file_arg
}
