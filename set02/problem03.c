//Write a program find whether a number is a composite number
#include<stdio.h>
int input_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int is_composite(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not composite numbers
    }
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 1; // Found a factor other than 1 and n, so it's composite
        }
    }
    
    return 0; // No factors other than 1 and n, so it's not composite
}