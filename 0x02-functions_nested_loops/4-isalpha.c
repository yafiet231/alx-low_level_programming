#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 for a letter, lowercase or uppercase or 0 otherwise
 */
int_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
