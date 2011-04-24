/*
Problem title: Calculate the sum of all the primes below two million.

Problem description:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <math.h>

#define TRUE (1)
#define FALSE (0)

int is_prime(long n);

int main(int argc, char* argv[]) {
    long i = 0, result = 0;

    for (i = 0; i < 2000000; i++) {
        if (is_prime(i)) {
            result += i;
        }
    }

    printf("%ld\n", result);

    return 0;
}

int is_prime(long n) {
    if (n <= 1)
        return FALSE;

    if (n == 2)
        return TRUE;

    int m;
    for (m = 2; m < sqrtl(n) + 1; m++) {
        if (n % m == 0) {
            return FALSE;
        }
    }

    return TRUE;
}
