#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 * @stack: Double pointer to top of stack
 * @line_number: line number in stack that relates to opcode
*/
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;  /*creates stack pointer to obtain val in stack*/
    int sum; /*var to hold sum of addition*/

    if (!temp || !temp->next)/*checks to see if add can be done*/
    {
        /*message indcates stack too short, failure*/
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        /*failure status*/
        exit(EXIT_FAILURE);
    }

    sum = temp->n + temp->next->n;/*adds two nodes*/
    temp->next->n = sum;/* updates value of next node*/
    *stack = temp->next;/* updates stack pointer to next*/
    free(temp);/*frees memory of current node*/
}