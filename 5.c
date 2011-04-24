/*
Problem title: What is the smallest number divisible by each of the numbers 1 to 20?

Problem description:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

#define TRUE (1)
#define FALSE (0)

#define SET_LENGTH 20

void init_set(int set[]);
void print_set(int set[]);
int test_set_is_divisible(int set[]);

int main(int argc, char* argv[]) {
/*
    //int set[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int i;
    int evenly_divisible = 0;
    int test, candidate;
    int result;
    for (candidate = 1; evenly_divisible < 20; candidate++) {
        evenly_divisible = 0;
        for (i = 0; i < 20; i++) {
            test = i + 1;
            if (candidate % test == 0) {
                evenly_divisible += 1;
            }
        }
        if (evenly_divisible == 20) {
            result = candidate;
        }
    }

    printf("%d\n", result);

    return 0;
*/
    
    int set[SET_LENGTH + 1];
    int test = 1;
    int i, result;

    init_set(set);

    do {
       test++;
       for (i = 1; i <= SET_LENGTH; i++) {
           set[i] = test % i == 0;
       }
    } while (!test_set_is_divisible(set));

    printf("%d\n", test);

    return 0;
}

// set[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
void init_set(int set[]) {
    int i;

    for (i = 0; i <= SET_LENGTH; i++) {
        set[i] = FALSE;
    }
}

int test_set_is_divisible(int set[]) {
    int i;

    for (i = 1; i <= SET_LENGTH; i++) {
        if (set[i] != TRUE)
            return FALSE;
    }

    return TRUE;
}

void print_set(int set[]) {
    int i;

    for (i = 1; i <= SET_LENGTH; i++) {
        printf("%d:%d\n", i, set[i]);
    }
}
