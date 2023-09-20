
#include <stdio.h>

long largest_prime_factor(long num)
{
long largest = -1;
long i = 2;

while (num > 1)
{
if (num % i == 0)
{
num /= i;
largest = i;
}
else
{
i++;
}
}

return largest;
}

int main()
{
long number = 612852475143;
long result = largest_prime_factor(number);

printf("%ld\n", result);

return 0;
}
