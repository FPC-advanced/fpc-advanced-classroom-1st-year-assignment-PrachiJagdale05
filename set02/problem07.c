//Write a program to find the area of a triangle.
#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

Triangle input_triangle() {
    Triangle area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &area.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &area.altitude);
    return area;
}

void find_area(Triangle *area) {
    area->area = 0.5 * area->base * area->altitude;
}

void output(Triangle area) {
    printf("Base: %f\n", area.base);
    printf("Altitude: %f\n", area.altitude);
    printf("Area: %f\n", area.area);
}

int main() {
    Triangle triangle;
    triangle = input_triangle();
    find_area(&triangle);
    output(triangle);
    return 0;
}