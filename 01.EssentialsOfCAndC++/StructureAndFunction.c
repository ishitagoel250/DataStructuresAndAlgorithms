#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r){
    return r.length*r.breadth;
}

void initialise(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}

int main() {
    struct Rectangle r = {0,0};
    int l, b;

    printf("Enter length:");
    scanf("%d\n",&r.length);
    printf("Enter breadth:");
    scanf("%d\n",&r.breadth);

    initialise(&r,l,b);

    int a=area(r);
    int peri=perimeter(r);

    printf("Area of the Rectangle is: %d\n",a);
    printf("Perimeter of the Rectangle is: %d\n",peri);

    return 0;
}