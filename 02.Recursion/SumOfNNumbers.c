#include <stdio.h>

int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int a = 10;
    int b = sum(a);
    printf("%d",b);

    return 0;
}