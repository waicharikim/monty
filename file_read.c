#include "monty.h"

/**
 * file_read - checks and opens file
 * @file_name: path to file
 *
 * Return: void
 */

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
