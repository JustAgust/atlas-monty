#include "monty.h"
/**
 * main - entry point to test functions
 * @argc: number of args
 * @argc: arguments
 * Return: EXIT_SUCCESS or EXIT_FAILURE
*/
int main(int argc, char *argv[])
{
    FILE *file;/*declare file ptr*/
    stack_t *stack = NULL;/*declare stack ptr init NULL*/
    char *line = NULL, *opcode = NULL;/*declare ptrs for line&opcode*/
    size_t len = 0; /*init len for getline*/
    unsigned int line_number = 0;/*line # counter*/

    if (argc != 2)/*checks for correct args provided*/
    {
        fprintf(stderr, "USAGE: monty file\n");/*print error message*/
        return (EXIT_FAILURE);/*return failure status*/
    }

    file = fopen(argv[1], "r");/*can file be opened, error handling if no*/
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n, argv[1]");/*see readme*/
        return (EXIT_FAILURE);/*see readme*/
    }
    while (getline(&line, &len, file) != -1)/*read lines from file*/
    {
        line_number++;/*increments per line read*/
        opcode = strtok(line, " \n\t\r");/*tokenize line, extract opcode*/
        if (opcode == NULL || opcode[0] == '#')
                continue;
        if (exec_handler(opcode, &stack, line_number))
                continue;
        else
        {
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
            free_all(line, stack, file);
            return (EXIT_FAILURE);
        }
    }
    free_all(line, stack, file);
    return (EXIT_SUCCESS);
}