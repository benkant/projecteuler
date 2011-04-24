/*
Problem title: Find the only Pythagorean triplet, {a, b, c}, for which a + b + c = 1000.

Problem description:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>

#define TRUE (1)
#define FALSE (0)

int is_pythagorean_triplet(int a, int b, int c);

int main(int argc, char* argv[]) {
    int a = 1, b = 2, c = 3, result = 0;

    for (; a < 1000; a++) {
        for (; b < 1000; b++) {
            for (; c < 1000; c++) {
                if (a + b + c == 1000) {
                    if (is_pythagorean_triplet(a, b, c)) {
                        result = a * b * c;
                        break;
                    }
                }
            }
            if (result > 0) {
                break;
            }
            c = 3;
        }
        if (result > 0) {
            break;
        }
        b = 2;
    }

    printf("%d\n", result);

    return 0;
}

int is_pythagorean_triplet(int a, int b, int c) {
    if (a < b && b < c) {
        return (a * a) + (b * b) == (c * c);
    }
    else {
        return FALSE;
    }
}
