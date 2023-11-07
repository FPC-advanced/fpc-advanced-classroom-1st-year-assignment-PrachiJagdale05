//Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("enter the the values of (x1,y1,x2,y2,x3,y3):");
    scanf("%f,%f,%f,%f,%f,%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
   float side1=(x2-x1)*(x2-x1)-(y2-y1)*(y2-y1);
   float side2=(x3-x2)*(x3-x2)-(y3-y2)*(y3-y2);
   float side3=(x1-x2)*(x1-x2)-(y1-y2)*(y1-y2);
   if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        return 1; 
    } else {
        return 0; 
    }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    float side1_squared = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    float side2_squared = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    float side3_squared = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);


}
