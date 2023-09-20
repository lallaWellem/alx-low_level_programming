#include <stdio.h>
#include <math.h>

/**
 * main - Print the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
    long x;
long maxf = 0;
long number = 612852475143;
double square = sqrt(number);

for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
maxf = x;
while (number % x == 0)
{
number /= x;
}
}
}

if (number > 1)
{
maxf = number;
}

printf("%ld\n", maxf);

return (0);
}
