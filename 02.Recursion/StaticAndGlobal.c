#include <stdio.h>
int x=0;
int fun(int n){
    static int y=5;
    if(n>0){
        x++;
        y++;
        return fun(n-1)+x;
        return fun(n-1)+y;
    }
    return 0;
}
int main(){
    int r;
    r=fun(5);
    printf("%d",r);
    return 0;
}