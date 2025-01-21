#include <stdio.h>
#include<stdlib.h>

struct Rectangle{
    int length;
    int breadth;
};

int main() {

    struct Rectangle r = {10,5};
    printf("%d \n",r.length);
    printf("%d \n",r.breadth);

    struct Rectangle *p=&r;
    printf("%d \n",p->length);
    printf("%d \n",p->breadth);

    struct Rectangle *q;
    q=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=25;
    p->breadth=4;

    return 0;
}