/*
Given a number n , check wheter it is even or odd. Return
 true for even and false for odd
*/


// 1 - Naive Approach : By finding the reminder - O(1) Time and O(1) Space

/*
 * We can check the reminder when divided by 2. If the reminder is 0 ,
 * the number is even , otherwise it is odd
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
 // Here we create a boolean to check it is even or not

void naive_approach(int n){

    printf("------ This is the naive approach ------ :");
    if (n % 2 == 0)
        printf("true\n");
    else
        printf("false\n");
}


// 2 - Efficient Approach : Using Bitwise AND Operator
/*
 * The last bit of all odd numbers is always 1,
 * while for even numbers it's 0. So, when performing bitwise AND operation
 * with 1 , odd numbers give 1, and even numbers give 0
 */


void efficient_approach(int n){
    // Taking bitwise AND of n with 1
    printf("\n ------ This is the efficient approach ----- :");
    if ((n & 1) == 0)
        printf("true\n");
    else
        printf("false\n");
}

int main() {
    int n;
    printf("Enter your input value here :");
    scanf_s("%d", &n);

    naive_approach(n);
    efficient_approach(n);

    return 0;
}
