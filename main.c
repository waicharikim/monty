#include "monty.h"

/** 
 * main - main program entry
 * @argc: argument count
 * @argv: argument string
 *
 * return: 0 for success
 */

main(int argc, char **argv)
{
  if (argc != 2)
    {
    fputs("USAGE: monty file", stderr);
    exit(EXIT_FAILURE);
    }
  return 0;
}
