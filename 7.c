/*
Problem title: Find the 10001st prime.

Problem description:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

#include <stdio.h>
#include <math.h>

#define TRUE (1)
#define FALSE (0)

int is_prime(long n);

int main(int argc, char* argv[]) {
    int n_primes = 0;

    long i;
    for (i = 0; n_primes < 10001;) {
        i++;
        if (is_prime(i)) {
            n_primes++;
        }
    }

    printf("%ld\n", i);

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
