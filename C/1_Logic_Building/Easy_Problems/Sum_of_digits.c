// Given a number n , find the sum of its digits

#include<stdio.h>
#include<string.h>

// Approach1 : Using Digit Extraction
/*
 * We can sum the digits of a number by repeatdly extracting
 * the last digit using n % 10, adding it to the sum , and then
 * removing it by dividing n by 10 using integer division
 */

int sumOfDigits_digit_extraction(int n) {
    int sum = 0;
    while (n != 0) {
        // Extract the last digit
        int last = n % 10;

        // Add last digit to sum
        sum += last;

        // Remove the last digit
        n /= 10;
    }

    return sum;
}


// Approach2 : Using recursion
/*
 * We can use recursion to find the sum of the digits. The
 * idea is to extract the last digit , add it to the sum of
 * digits of the remaining number , and repeat.
 * Base Case : If the number is 0 , return 0.
 * Recursive Case : Return (n % 10) + sumOfDig(n / 10)
 */

int sumOfDigits_recursive_approach(int n) {

     // Base case
    if ( n == 0)
         return 0;

    // Recursive Case
    return (n % 10) + sumOfDigits_recursive_approach(n / 10);
}

// Approach 3 : Using Converison
/*
 * Convert the number to a string and iterate through each character (digit).
 * For each character , subtract the ASCII value of 'O' to get the actual digit,
 * then add it to the sum
 */

int sumOfDigits_string_conversion(int n) {
    // Convert number to string
    char s[20];
    sprintf(s, "%d", n);
    int sum = 0;

    // Loop through each character , convert to digit , and add to sum
    for (int i = 0; i < strlen(s); i++) {
        sum += s[i] - '0';
    }

    return sum;
}

int main() {
    int n;
    printf("Enter your value here : ");
    scanf_s("%d", &n);
    printf("\n------ Digit Extraction ------\n");
    printf("%d", sumOfDigits_digit_extraction(n));
    printf("\n------ Recursive Approach ------\n");
    printf("%d", sumOfDigits_recursive_approach(n));
    printf("\n------ String Conversion ------\n");
    printf("%d", sumOfDigits_string_conversion(n));

    return 0;
}
