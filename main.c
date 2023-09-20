#include "monty.h"

/**
 * main - main program entry
 * @argc: argument count
 * @argv: argument string
 *
 * return: 0 for success
 */

int main(int argc, char **argv)
	(void) argv;
  if (argc != 2)
    {
      fprintf(stderr, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  return 0;
}
