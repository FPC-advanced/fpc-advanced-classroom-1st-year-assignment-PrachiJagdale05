//Write a program to find the permeter of a polygon
#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} pt;

typedef struct polygon {
    int sides;
    pt p[100];
    float perimeter;
} pl;

int input_n() {
    printf("Enter the number of sides of the polygon:");
    int n;
    scanf("%d", &n);
    return n;
}

pt input_point() {
    pt p;
    printf("Enter the coordinates of point(x,y):");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

void input_polygon(pl *p) {
    printf("Please enter the number of sides: ");
    scanf("%d", &p->sides);
    for (int i = 0; i < p->sides; i++) {
        p->p[i] = input_point();
    }
}

float find_distance(pt a, pt b) {
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

void find_perimeter(pl *p) {
    float perimeter = 0.0;
    for (int i = 0; i < p->sides; i++) {
        int next_index = (i + 1) % p->sides;
        perimeter += find_distance(p->p[i], p->p[next_index]);
    }
    p->perimeter = perimeter;
}

void output(pl p) {
    printf("Perimeter of the polygon: %.2f\n", p.perimeter);
}

int main() {
    pl polygon;
    input_polygon(&polygon);
    find_perimeter(&polygon);
    output(polygon);

    return 0;
}
