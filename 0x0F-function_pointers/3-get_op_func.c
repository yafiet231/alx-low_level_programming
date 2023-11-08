#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - a  function that selects the correct function to perform the
 * operation asked by the user.
 * @s: operator passed as argument to the program
 *
 * Return: Null If s does not match any of the 5 expected operators
 * (+, -, *, /, %), otherwise a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
