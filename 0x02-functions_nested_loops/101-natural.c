#include <stdio.h>

int main() 
{
int total_sum = 0;
for (int number = 1; number < 1024; number++) 
{

if (number % 3 == 0 || number % 5 == 0) {

total_sum += number;
}
}
printf("%d\n", total_sum);

return 0;
}
