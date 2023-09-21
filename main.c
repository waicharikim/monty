#include "monty.h"

/**
 * main - monty bytecode interpreter
 * @argc: argument count
 * @argv: argument string
 *
 * return: 0 for success
 */

void arg_check(int argc);
void file_read(char *);
void malloc_fail(void);
void file_read_error(char *);
void free_args(void);

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

void arg_check(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

void file_read(char *file_name)
{
	int fd;

	file_arg = malloc(sizeof(file_t));
	if (file_arg == NULL)
		malloc_fail();
	file_arg->stream = NULL;
	file_arg->line_content = NULL;
	file_arg->line_no = 0;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		file_read_error(file_name);
	file_arg->stream = fdopen(fd, "r");
	if (file_arg->stream == NULL)
	{
		close(fd);
		file_read_error(file_name);
	}
}

void malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}

void free_args(void)
{
	free(file_arg);
}

void file_read_error(char *file_name)
{
	fprintf(stderr, " Error: Can't open file %s\n", file_name);
	exit(EXIT_FAILURE);
}
