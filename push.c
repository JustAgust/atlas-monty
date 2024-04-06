#include "monty.h"

/**
 * push - opcode for pushing to stack
 * @stack: pointer to top of the stack
 * @line_number: number of lines
 * Return: void
*/
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new_node = NULL;
    char *token = NULL;
    int num = 0;

    token = strtok(NULL, " \n\t\r");
    if (token == NULL || check_digit(token) == 1)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }
    num = atoi(token);
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->n = num;
    new_node->prev = NULL;
    new_node->next = NULL;
    if (*stack == NULL)
    {
        *stack = new_node;
        return;
    }
    new_node->next = *stack;
    (*stack)->prev = new_node;
    *stack = new_node;
}