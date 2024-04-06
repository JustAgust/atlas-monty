#include "monty.h"

/**
 * check_digit - checks if string is a digit
 * @token: string to check
 * Return: 0 if success, 1 if not
 */
int check_digit(char *token)
{
	int i = 0;

	if (token == NULL)
		return (1);
	if (token[0] == '-')
		i = 1;
	for (; token[i] != '\0'; i++)
	{
		if (isdigit(token[i]) == 0)
			return (1);
	}
	return (0);
}
