/*
Problem title: Find the largest prime factor of a composite number.

Problem description:
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

#define TRUE (1)
#define FALSE (0)

int main(int argc, char* argv[]) {
    long test = 600851475143;

    long n, p;
    for (n = sqrtl(test); n > 1; n--) {
        if (is_prime(n)) {
            if (test % n == 0) {
                printf("%ld\n", n);
                break;
            }
        }
    }

    return 0;
}

/* this may not do */
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
