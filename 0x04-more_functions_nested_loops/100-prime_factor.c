#include <stdio.h>
#include <math.h>

long largestPrimeFactor(long n) {
long maxPrime = -1;
long i;

while (n % 2 == 0) {
maxPrime = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2) {
while (n % i == 0) {
maxPrime = i;
n /= i;
}
}

if (n > 2) {
maxPrime = n;
}

return maxPrime;
}

int main() {
long num = 612852475143;
long largestPrime = largestPrimeFactor(num);

printf("%ld\n", largestPrime);

return 0;
}
