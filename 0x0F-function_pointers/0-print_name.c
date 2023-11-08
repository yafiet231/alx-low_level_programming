#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: string containing the name
 * @f: pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(f) (name);
	}
}
