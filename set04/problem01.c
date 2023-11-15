//Write a program to find sum of two fractions
#include <stdio.h>

);



// Function to input two fractions
void input(int *num1, int *den1, int *num2, int *den2) {
    printf("Enter the first fraction (numerator/denominator): ");
    scanf("%d/%d", num1, den1);

    printf("Enter the second fraction (numerator/denominator): ");
    scanf("%d/%d", num2, den2);
}

// Function to add two fractions
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    // Find a common denominator
    *res_den = den1 * den2;

    // Add the numerators with the common denominator
    *res_num = (num1 * den2) + (num2 * den1);
}

// Function to output the result
void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
    printf("Sum of %d/%d and %d/%d is %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}
int main() {
    int num1, den1, num2, den2, res_num, res_den;

    // Input two fractions
    input(&num1, &den1, &num2, &den2);

    // Add the fractions
    add(num1, den1, num2, den2, &res_num, &res_den);

    // Output the result
    output(num1, den1, num2, den2, res_num, res_den);

    return 0;
}
