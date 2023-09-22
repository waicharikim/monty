#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>

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
 * @content: string read from file
 * @tokens: words tokenized from content
 * @token_count: no of tokens
 * @instruction: valid instruction
 *
 * Description: file and contents in the file
 */
typedef struct file_s
{
	FILE *stream;
	char *line_content;
	unsigned int line_no;
	char **tokens;
	int token_count;
	instruction_t *instruction;
	stack_t *stack_top;
	int stack_len;
	int q_or_s;
}file_t;

extern file_t *file_arg;

/*function prototypes*/

void arg_check(int argc);
void file_read(char *);
void malloc_fail(void);
void file_read_error(char *);
void free_args(void);
void instructions_error(void);
void tokenizer(void);
void check_instructions();
void file_close(void);
void free_stack(stack_t *top);
void free_tokens(void);
int is_digit(char *token);
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void free_stack_top(void);
void open_instructions(void);
void delete_node(void);
void file_close(void);
void free_all(void);
void free_stack_top(void);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack,unsigned int line_number);

#endif /* MONTY_H */
