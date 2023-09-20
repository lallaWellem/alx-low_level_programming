#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int i, space, hash;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
for (space = 1; space <= size - i; space++)
{
_putchar(' ');
}

for (hash = 1; hash <= i; hash++)
{
_putchar('#');
}

_putchar('\n');
}
}
