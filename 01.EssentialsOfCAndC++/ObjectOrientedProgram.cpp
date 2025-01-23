#include <iostream>

using namespace std;

class Rectangle{
public:
    int length;
    int breadth;

void initialise(int l, int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

int perimeter(){
    return 2*(length+breadth);
}
};

int main() {
    Rectangle r;
    int l, b;

    printf("Enter length:");
    cin>>l;
    printf("Enter breadth:");
    cin>>b;

    r.initialise(l,b);

    int a=r.area();
    int peri=r.perimeter();

    printf("Area of the Rectangle is: %d\n",a);
    printf("Perimeter of the Rectangle is: %d\n",peri);

    return 0;
}