//Write a program to find nth number in fibonacci sequence.
#include<stdio.h>
int input(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    return a;
}
int find_fibo(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, fibo;
        for (int i = 2; i <= n; i++) {
            fibo = a + b;
            a = b;
            b = fibo;
        }
        return fibo;
    }
}
void output(int n, int fibo){
    printf("enter the number for fibonacci sequence:%d\n",n,fibo);
}
int main(){
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}