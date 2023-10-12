#include "main.h"

/**
 * * _isupper - checks if a character is an uppercase letter
 * @c: char to check
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'z')
		return (1);
	else
		return (0);
}

