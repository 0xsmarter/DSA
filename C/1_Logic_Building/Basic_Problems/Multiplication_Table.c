// Iterative Approach
/*
 * The iterative approach for printing a multiplication table involves
 * using a loop to calculate and print the product of a given number and
 * the numbers in range from 1 to 10 . In this method , you begin with the
 * number whose table you want to print and use a loop to multiply it with increasing values
 */

#include <stdio.h>

void printTable_iterative(int n) {
    printf("------ Iteravtive Approach ------");
    for (int i = 1; i <= 10; i++)
        printf("\n%d * %d = %d\n", n, i, n * i);
}

void printTable_recursive(int n, int i) {
    if (i == 11)
        return;
    printf("\n%d * %d = %d\n", n, i, n * i);
    i++;
    printTable_recursive(n, i);
}

int main() {
    int n;
    printf("Enter your numbere here :");
    scanf_s("%d", &n);
    printTable_iterative(n);
    printf("\n------ Recursive Approach ------\n");
    printTable_recursive(n, 1);

    return 0;
}
