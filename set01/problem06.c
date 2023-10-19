//Write a C program to compare three numbers using **pass by reference*
#include<stdio.h>
int input(int *a,int *b,int *c){
    
    printf("enter the first number:");
    scanf("%d",a);
    printf("enter the second number:");
    scanf("%d",b);
    printf("enter the third number:");
    scanf("%d",c);
}
 void comapre(int a,int b, int c,int *largest){
    if(a>=b && a>=c){
        *largest=a;
    } else if(b>=a && b>=c){
        *largest
    }
    }
 }

