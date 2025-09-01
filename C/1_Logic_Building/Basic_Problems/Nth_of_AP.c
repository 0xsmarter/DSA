// Given two Integers a1 and a2, the first and second terms of arithmetic
// series repectively , the problem is to find the n^th term of the series

#include <stdio.h>

// Naive Approach : Using Loop

int nthTermOfAP_naive_approach(int a1, int a2, int n) {
    int nthTerm = a1, d = a2 - a1;
    for (int i = 1; i < n; i++) {
        nthTerm += d;
    }
    return nthTerm;
}

// Expected Approach : Using the Formula for nth Term :

int nthTermOfAP_expected_approach(int a1, int a2, int n) {
    // Using formula to find Nth term t(n) = a(1) + (n - 1)*d
    return (a1 + (n - 1) * (a2 - a1));
}


int main() {
    int a1, a2, n;
    printf("Enter your value here : ");
    scanf_s("%d, %d, %d", &a1, &a2, &n);
    printf("\n------ Naive Approach ------\n");
    printf("%d", nthTermOfAP_naive_approach(a1, a2, n));
    printf("\n------ Expected Approach ------\n");
    printf("%d", nthTermOfAP_expected_approach(a1, a2, n));

    return 0;
}
