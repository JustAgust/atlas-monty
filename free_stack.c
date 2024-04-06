#include "monty.h"
/**
 * free_stack - frees the stack
 * @head: pointer to the head of stack
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *s;

	s = head;
	while (s)
	{
		s = s->next;
		free(head);
		head = s;
	}
}

/**
 * free_all - free all
 * @line: line
 * @stack: stack
 * @file: file
 * Return: void
 */
void free_all(char *line, stack_t *stack, FILE *file)
{
	free(line);
	free_stack(stack);
	fclose(file);
}
