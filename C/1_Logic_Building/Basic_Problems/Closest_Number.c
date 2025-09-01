// Given two integers n and m (m != 0). Find the number closest
// to n and divisible by m . If there is more than once such number,
// then output the one having maximum absolute value.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Naive Approach : Iterative Checking

int closestNumber_native_approach(int n, int m) {
    // Find the quotient
    int closest = 0;
    int minDifference = INT_MAX;

    // Check numbers around n
    for (int i = n - abs(m); i <= n + abs(m); i++) {
        if (i % m == 0) {
            int difference = abs(n - i);

            if (difference < minDifference || (difference == minDifference && abs(i) > abs(closest))) {
                closest = i;
                minDifference = difference;
            }
        }
    }

    return closest;
}

// Expected Approach : By finding quotient

int closestNumber_expected_approach(int n, int m) {
    int q = n / m;

    // 1st possible closest number
    int n1 = m * q;

    // 2nd possible closest number
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));

    // If true , then n1 is the required closest number
    if (abs(n - n1) < abs(n - n2))
        return n1;

    // else n2 is the required closest number
    return n2;
}

int main() {
    int a , b;
    printf("Enter your value here :");
    scanf_s("%d, %d", &a, &b);
    printf("\n------ Naive Approach ------\n");
    printf("%d", closestNumber_native_approach(a, b));
    printf("\n------ Expected Approach ------\n");
    printf("%d", closestNumber_expected_approach(a, b));

    return 0;
}
