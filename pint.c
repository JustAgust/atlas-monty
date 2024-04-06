#include "monty.h"

/**
 * pint - prints the value at the top of stack
 * @stack: pointer to top of stack
 * @line_number: line index
*/
void pint(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    if (temp == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", temp->n);
}