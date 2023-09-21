#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/*function prototypes*/

void arg_check(int argc);
void file_read(char *);
void malloc_fail(void);
void file_read_error(char *);
void free_args(void);

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct file_s - file and contents
 * @stream: file stream
 * @content: string re from file
 *
 * Description: file and contents in the file
 */
typedef struct file_s
{
	FILE *stream;
	char *line_content;
	unsigned int line_no;
}file_t;

extern file_t *file_arg;

#endif /* MONTY_H */
