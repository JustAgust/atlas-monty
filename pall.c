#include "monty.h"

/**
 * pall - prints the stack
 * @stack: pointer to top of stack
 * @line_number: Line index (unused)
 * Return: void
*/
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *s;

    (void)line_number;
    s = *stack;

    while (s != NULL)
    {
        printf("%d\n", s->n);
        s = s->next;
    }
}