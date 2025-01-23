#include<stdio.h>

//Arrays are always passed by address and not by value

void fun(int A[ ], int n){
    printf("%d",sizeof(A)/sizeof(int));

    A[0]=15;

    for (int i=0; i<n; i++){
        printf("%d\n",A[i]);
    }
}

int main() {
    int A[] = {1,2,3,4,5,6};
    int n=6;

    for(int i=0; i<6; i++){
        printf("%d\n",i);
    }

    fun(A,n);

    return 0;
}