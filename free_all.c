/**
 * free_all - Frees all allocated memory
 */

void free_all(void)
{
	file_close();
	free_tokens();
	free_args();
}
