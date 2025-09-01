// You are given a cubic dice with 6 dices . Your task is to guess
// the number on the opposite face of the cube.

#include <stdio.h>

// Naive Approach : Using If-else Statement
/*
 * In a normal 6-faced dice , 1 is opposite to 6, 2 is opposite
 * to 5 , and 3 is opposite to 4 . Hence a normal if-else-if block can be placed
 */

int oppositeFaceOfDice_native_approach(int n) {
    int ans;
    if (n == 1) {
        ans = 6;
    }

    else if (n == 2) {
        ans = 5;
    }

    else if (n == 3) {
        ans = 4;
    }

    else if (n == 4) {
        ans = 3;
    }

    else if (n == 5) {
        ans = 2;
    }

    else {
        ans = 1;
    }

    return ans;
}


// Expected Approach : Using Sum of Two Sides
/*
 * The idea is based on the observation that the sum of two
 * opposite sides of a cubical dice is equal to 7. So , just
 * subtract the given n from 7 and print the answer.
 */

int oppositeFaceOfDice_expected_approach(int n) {
     // Stores number on opposite face of dice
     int ans = 7 - n;
     return ans;
}

int main() {
    int n;
    printf("Enter between 1 to 5: ");
    scanf_s("%d", &n);
    printf("\n------ Naive Approach ------\n");
    printf("%d", oppositeFaceOfDice_native_approach(n));
    printf("\n------ Expected Approach ------\n");
    printf("%d", oppositeFaceOfDice_expected_approach(n));

    return 0;
}
