#include <stdio.h>

int power(int m, int n){
    if (n==0){
        return 1;
    }
    else if(n%2==0){
        return power(m*m,n/2);
    }
    else{
        return m*power(m*m,(n-1)/2);
    }
}
int main (){
    int a = 5;
    int b = 6;
    int c = power(a,b);

    printf("%d",c);
    return 0;
}