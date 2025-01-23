#include<stdio.h>

int main() {
    int length=0, breadth=0;
    printf("Enter length:");
    scanf("%d\n",&length);
    printf("Enter breadth:");
    scanf("%d\n",&breadth);

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("Area of the Rectangle is: %d\n",area);
    printf("Perimeter of the Rectangle is: %d\n",peri);
}