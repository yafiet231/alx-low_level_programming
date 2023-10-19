#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: a pointer to the result, or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, x, y, z, n;
for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i > size_r || j > size_r)
return (0);
z = 0;
for (i -= 1, j -= 1, x = 0; x < size_r - 1; i--, j--, x++)
{
n = z;
if (i >= 0)
n += n1[i] - '0';
if (j >= 0)
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
z = n / 10;
r[x] = n % 10 + '0';
}
r[x] = '\0';
if (i >= 0 || j >= 0 || z)
return (0);
for (x -= 1, y = 0; y < x; x--, y++)
{
z = r[x];
r[x] = r[y];
r[y] = z;
}
return (r);
}
