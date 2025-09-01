// Given a positive integer n , find the sum of the first n natural numbers

#include <stdio.h>
// Naive Approach : Using Loop
/*
 * Calculate the sum of all integers form 1 to n by
 * iterating through a loop
 */

 int findSum_naive_approach(int n) {
    int sum = 0;

     /*
      * Iterating over all the numbers
      * between 1 to n
      */

    for (int x = 1; x <= n; x++) {
         sum += x;
    }
    return sum;
}

// Another Approach : Using recursive approach
/*
 * In this approach , we use recursion to find the sum of the
 * first n natural numbers. The function calls itself with (n-1)
 * until it reaches the base case of n = 1. Each call adds the
 * current value of n to the sum of smaller values , effectively
 * building te result in a top-down manner.
 * */

int findSum_recursive(int n) {
    // Base case
    if (n == 1)
        return 1;

    return n + findSum_recursive(n - 1);
}

// Expected Approach : Formula Based Method

int findSum_formula_based(int n) {
    // Using mathematical formula to compute sum of first n
    // natual numbers

    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Enter your input value here :");
    scanf_s("%d", &n);
    printf("\n------ Naive Approach ------\n");
    printf("%d", findSum_naive_approach(n));
    printf("\n------ Recursive Approach ------\n");
    printf("%d", findSum_recursive(n));
    printf("\n------ Formula Based Approach ------\n");
    printf("%d", findSum_formula_based(n));

    return 0;
}
