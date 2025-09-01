// Given an Integer n , find the reverse of its digits

#include<stdio.h>
#include<stdlib.h>

// Approach 1 : Reversing Digit by Digit
/*
 * This idea for this approach is to repeatedly extract the last
 * digit of n using the modulus operator(n % 10) and appending it
 * to the reverse number(revNUm). After extracting the digit , the
 * number n is reduced by dividing it by 10 ( n /= 10). This process
 * continues until n becomes 0 . Finally , the reversed number (revNum)
 * is returned
 */

int reverseDigits_digit_approach(int n) {
    int revNum = 0;
    while (n > 0) {
        revNum = revNum * 10 + n % 10;
        n /= 10;
    }

    return revNum;
}


// Approach 2 : Using Recursion
/*
 * This approach uses a recursive function reverseDigits_recursive
 * with the number n and an accumulator variable revNum to store the
 * reversed number , and basePos to keep track of the place value (
 * ones, tens, hundreds, etc.). ....
 */

void reverseDigits_recursive(int n, int *revNum, int *basePos) {
     if (n > 0){
         reverseDigits_recursive(n / 10, revNum, basePos);
         *revNum += (n % 10) * (*basePos);
         *basePos *= 10;
     }
}

// Approach 3 : Using String

void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char* s) {
    char* word_begin = s;
    char* temp = s;


    // Reversing individual words as explained in the first step
    while (*temp) {
        temp++;
        if (*temp == '\0'){
            reverse(word_begin, temp - 1);
        }

        else if (*temp == ' '){
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    reverse(s, temp - 1);
}

int reverseDigits_string_approach(int n) {
    char strin[100];
    sprintf(strin, "%d", n);

    // Reversing the string
    reverseWords(strin);

    // Converting string to integer
    n = atoi(strin);

    return n;
}

int main() {
    int n, revNum, basePos;
    printf("Enter your value here : ");
    scanf_s("%d, %d, %d", &n, &revNum, &basePos);
    printf("\n------ Digit By Digit Approach ------\n");
    printf("%d", reverseDigits_digit_approach(n));
    getchar();
    printf("\n------ Recursion Approach ------\n");
    reverseDigits_recursive(n, &revNum, &basePos);
    printf("%d", revNum);
    printf("\n------ String Approach ------\n");
    printf("%d\n", reverseDigits_string_approach(n));

    return  0;

}
