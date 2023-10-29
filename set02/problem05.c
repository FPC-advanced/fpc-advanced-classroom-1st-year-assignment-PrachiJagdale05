//Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int find_gcd(int a, int b) {
    while (b != 0) {
        int n = a % b;
        a = b;
        b = n;
    }
    return a;
}
void output(int a, int b, int hcf) {
    printf("The GCD (HCF) of %d and %d is %d\n", a, b, hcf);
}

int main() {
    int num1, num2;
    num1 = input();
    num2 = input();
    int hcf = find_gcd(num1, num2);
    output(num1, num2, hcf);
    return 0;
}
