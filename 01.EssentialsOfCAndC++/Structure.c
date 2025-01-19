#include <stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
struct ComplexNumbers{
    int real;
    int img;
};
struct Student{
    int rollno;
    char name[25];
    char dept[50];
    char address[100];
};
int main() {
    struct Rectangle r = {10,5};
    printf("length and breadth of rectangle is %d and %d \n", r.length, r.breadth);
    r.length=15;
    printf("Area of the rectangle is %d \n", r.length*r.breadth);

    return 0;
}