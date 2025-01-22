// Pass by Value

#include<stdio.h>

void swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("%d\n%d\n", a, b);

    swap(a,b);
    printf("%d\n%d\n", a, b);

    return 0;
}