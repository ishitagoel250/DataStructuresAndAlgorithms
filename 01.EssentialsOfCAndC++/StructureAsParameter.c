#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

void fun (struct Rectangle r){
    r.length=25;
    printf("%d\n%d\n",r.breadth, r.length);
}

int main() {
    struct Rectangle r={10,5};
    fun(r);
    printf("Length %d\nBreadth %d", r.length, r.breadth);

    return 0;
}