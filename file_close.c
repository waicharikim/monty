#include "monty.h"
/**
 * file_close - closes stream
 *
 * Return: void
 */
void file_close(void)
{
	if (file_arg->stream == NULL)
		return;
	fclose(file_arg->stream);
	file_arg->stream = NULL;
}
