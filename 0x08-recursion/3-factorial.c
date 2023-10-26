#include "main.h"

/**
 * factorial - calculates the factorial of a number.
 * @n: the number for which the factorial is calculated.
 * Return: the factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
