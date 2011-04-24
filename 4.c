/*
Problem title: Find the largest palindrome made from the product of two 3-digit numbers.

Problem description:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is
9009 = 91  99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define TRUE (1)
#define FALSE (0)

int main(int argc, char* argv[]) {
    int n_1, n_2, p, r;
/*
    // tests...
    n_1 = 9009;
    n_2 = 927314729;

    if (is_palendromic(n_1)) {
        printf("%d is palendromic\n", n_1);
    }
    else {
        printf("%d is not palendromic\n", n_1);
    }

    if (is_palendromic(n_2)) {
        printf("%d is palendromic\n", n_2);
    }
    else {
        printf("%d is not palendromic\n", n_2);
    }

    return 0;
*/
    
    r = 0;
    for (n_1 = 100; n_1 <= 999; n_1++) {
        for (n_2 = 100; n_2 <= 999; n_2++) {
            p = n_1 * n_2;
            if (is_palendromic(p)) {
                if (p > r) {
                    r = p;
                }
            }
        }
    }

    printf("%d\n", r);

    return 0;
}

int is_palendromic(int n) {
    char *s;
    int len, i;

    asprintf(&s, "%d", n);
    len = strlen(s) - 1; // ignore terminator

    // this works for both even and odd length strings as
    // it will test the middle character of the string against
    // itself when i == len - i
    for (i = 0; i <= floor(len / 2); i++) {
        if (s[i] != s[len-i]) {
            return FALSE;
        }
    }

    return TRUE;
}
