the monty interpreter - interprets monty bitecode files

made by JACKLINE AMWENYA & KIMANI WAICHARI

DATA STRUCTURES USED

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


* outputs - printed on stdout
* error messages - printed on stderr
* the code is compiled by : gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

0. push, pall - implementation of the push and pall opcodes
	- push : pushes an element to the stack
	- pall : prints all the values on the stack, starting from the top of the stack

1. pint - implementation of the pint opcode
	- pint : prints value on top of the stack followed by a new line

2. pop - implementation of the pop opcode
	- pop : removes the element at the top of the stack

3. swap - implementation of the swap opcode
	- swap : swaps the two upper-most elements of the stack

4. add - implementation of the add opcode
	- add : adds the two upper-most elements of the stack

5. nop - implementation of the nop opcode
<<<<<<< HEAD
	- nop : does not do anything

=======
	- nop : does not do anything
>>>>>>> master
