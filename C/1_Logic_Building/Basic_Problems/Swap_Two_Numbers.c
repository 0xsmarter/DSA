#include <stdio.h>

// Naive Approach : Using a third variable
/*
 * The idea is to use a third variable , say temp to store the
 * original value of one of the variables during the swap
 * Store the value of "a" in "temp".
 * Assign the value of "b" to "a".
 * Assign the value of "temp" to "b".
 */

void swap_native_approach(int a, int b) {
    printf("a = %d, b = %d\n", a , b);

    // Swap a and b using temp variables
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
}

// Alternative Approach
void swap_alternative(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a , b;
    printf("Enter your value here :");
    scanf_s("%d , %d", &a, &b);
    printf("\n------ Native Approach ------\n");
    swap_native_approach(a, b);
    printf("\n------ Swap Alternative ------\n");
    printf("\na = %d, b = %d\n", a, b);
    swap_alternative(&a, &b);
    printf("\na = %d, b = %d\n", a, b);

    return 0;
}
