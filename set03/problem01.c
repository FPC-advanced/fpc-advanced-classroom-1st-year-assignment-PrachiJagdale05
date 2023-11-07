// Write a program to find the distance between 2 points
#include<stdio.h>

void input(float *x1, float *y1, float *x2, float *y2){
    printf("enter the values for(x1,y1):");
    scanf("%f,%f",x1,y1);
    printf("enter the values for(x2,y2):");
    scanf("%f,%f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2){
    float dx = x2 - x1;
    float dy = y2 - y1;
    return dx * dx + dy * dy; 
}
void output(float x1, float y1, float x2, float y2, float distance){
     printf("The distance between Point  (%f, %f) and Point (%f, %f) is: %f\n", x1, y1, x2, y2, distance);
}

int main(){
    
float x1, y1, x2, y2;
input(&x1, &y1, &x2, &y2);    
float distance = find_distance(x1, y1, x2, y2);
output(x1, y1, x2, y2, distance);
return 0;

}// Write a program to find the distance between 2 points
#include<stdio.h>

void input(float *x1, float *y1, float *x2, float *y2){
    printf("enter the values for(x1,y1):");
    scanf("%f,%f",x1,y1);
    printf("enter the values for(x2,y2):");
    scanf("%f,%f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2){
    float dx = x2 - x1;
    float dy = y2 - y1;
    return dx * dx + dy * dy; 
}
void output(float x1, float y1, float x2, float y2, float distance){
     printf("The distance between Point  (%f, %f) and Point (%f, %f) is: %f\n", x1, y1, x2, y2, distance);
}

int main(){
    
float x1, y1, x2, y2;
input(&x1, &y1, &x2, &y2);    
float distance = find_distance(x1, y1, x2, y2);
output(x1, y1, x2, y2, distance);
return 0;

}