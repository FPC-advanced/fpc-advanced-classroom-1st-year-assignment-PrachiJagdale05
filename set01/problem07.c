// Write a C program to find sum of all natural numbers until _n_
#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);


int input_n() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    return n;
}

int sum_n_nos(int n) {
    return (n * (n + 1)) / 2;
}

void output(int n, int sum) {
    printf("Sum of natural numbers up to %d is: %d\n", n, sum);
}
int main() {
    int n, sum;
    n = input_n();
    sum = sum_n_nos(n);

    output(n, sum);

    return 0;
}