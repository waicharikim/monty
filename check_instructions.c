#include "monty.h"
/**
 * check_instructions - checks first token and sets appropriate instructions
 *
 *Return: void
 */
void check_instructions()
{
	int i = 0;
	instruction_t instructions[] =
		{{"push", &push}, {"pall", &pall}'
		{"pint", &pint0}, {"pop", &pop},
		{"swap", &swap}, {"add", &add},
		{"nop", &nop}, {NULL, NULL}};
	if (file_arg->tokens == 0)
		return;
	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, file_arg->tokens[0]) == 0)
		{
			file_arg->instruction->opcode = instructions[i].opcode;
			file_arg->instruction->f = instructions[i].f;
			return;
		}
	}
	instructions_error();
}
