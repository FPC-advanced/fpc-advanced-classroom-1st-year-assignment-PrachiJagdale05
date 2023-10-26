//02.  Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side(){
    int side;
    printf("enter the side:");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c){
    if (a!=b && b!=c && a!=c) {
        return 1;
    }
    else{
        return 0;
    }

}
void output(int a, int b, int c, int isScalene){
    printf("Side 1: %d\n", a);
    printf("Side 2: %d\n", b);
    printf("Side 3: %d\n", c);

    if (isScalene) {
        printf("This is a scalene triangle.\n");
    } else {
        printf("This is not a scalene triangle.\n");
    }
}
int main(){
    int side1 ,side2,side3,isScalene;
    side1=input_side();
    side2=input_side();
    side3=input_side();
    isScalene=check_scalene(side1,side2,side3);
    output(side1,side2,side3,isScalene);
    return 0;

}