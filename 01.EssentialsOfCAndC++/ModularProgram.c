#include<stdio.h>

//Modular Programming is also known as Procedural Programming

int area(int length, int breadth){
    return length*breadth;
}

int perimeter(int length, int breadth){
    return 2*(length+breadth);
}

int main() {
    int length=0, breadth=0;

    printf("Enter length:");
    scanf("%d\n",&length);
    printf("Enter breadth:");
    scanf("%d\n",&breadth);

    int a=area(length,breadth);
    int peri=perimeter(length,breadth);

    printf("Area of the Rectangle is: %d\n",a);
    printf("Perimeter of the Rectangle is: %d\n",peri);

    return 0;
}