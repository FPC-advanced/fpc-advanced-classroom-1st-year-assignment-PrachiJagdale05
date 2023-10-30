//Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n]) {
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 1) {
            
            continue;
        }
        int isComposite = 0;
        for (int j = 2; j < a[i]; j++) {
            if (a[i] % j == 0) {
                isComposite = 1;
                break;
            }
        }
        if (isComposite) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers in the array is: %d\n", sum);
}
int main() {
    int num;
    int n = input_array_size();
    int array[n];
    input_array(n, array);
    int sum = sum_composite_numbers(n, array);
    output(sum);
    return 0;
}