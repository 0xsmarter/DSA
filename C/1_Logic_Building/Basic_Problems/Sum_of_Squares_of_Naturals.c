// Given a positive integer n , we have to find the sum of squares of first n natural numbers.

#include <stdio.h>

// Naive Approach : Adding One By One
/*
 * The idea for this naive approach is to run a loop from
 * 1 to n and sum up all the squares
 */

int summation_naive_approach(int n) {
    int sum = 0;
    for (int i = 1; i <= n ; i++)
        sum += (i * i);

    return sum;
}


// Expected Approach - Using Mathematical Formulae
/*
 * The idea for this approach is to use mathematical formulae
 * for the sum of squares of first n natural numbers.
 * 1^2 + 2^2 + ....... + n^2 = n(n + 1)(2n + 1) / 6
 */
int summation_expected_approach(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}


// Avoid Overflow
/*
 * Sometimes due to overflow to large value of n , the value
 * of (n * (n + 1) * (2 *  n + 1)) would overflow. We can avoid this overflow up
 * to some extent using the fact that n * (n + 1) must be divisible by 2 and
 * restructuring the formula as (n * (n + 1)/ 2) * (2 * n + 1) / 3;
 *
 */
int summation_no_overflow(int n) {
    return (n * (n + 1) / 2) * (2 * n + 1) / 3;
}

int main() {
    int n;
    printf("Enter your value here :");
    scanf_s("%d", &n);
    printf("\n------ Naive Approach ------\n");
    printf("%d", summation_naive_approach(n));
    printf("\n------ Expected Approach ------\n");
    printf("%d", summation_expected_approach(n));
    printf("\n------ No Overflow Approach ------\n");
    printf("%d", summation_no_overflow(n));

    return 0;
}
