#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; 1 <= 9; i++)
	{
		for (i = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
