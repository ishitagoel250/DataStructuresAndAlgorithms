#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 10;
    int *p;
    p=&a;

    printf("%d \n",a);
    printf("%d \n",*p);
    printf("%d \n",p);
    printf("%d",&a);


    int A[5]={1,2,3,4,5};
    int *q;
    q=A;
    int *r;
    r=&A[0];

    for (int i=0; i<5; i++){
        printf("%d \n",A[i]);
    }

    for (int i=0; i<5; i++){
        printf("%d \n",q[i]);
    }

    int *s;
    s=(int *)malloc(5*sizeof(int));
    s[0]=10;
    s[1]=23;
    s[2]=1;
    s[3]=22;
    s[4]=16;

    for (int i=0; i<5; i++){
        printf("%d \n",s[i]);
    }

    return 0;
}