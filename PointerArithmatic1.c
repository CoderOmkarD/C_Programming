#include<stdio.h>

int main()
{
    int iArr[]={11,21,51,101,111};
    int *p=NULL;
    int *q=NULL;

    p=&(iArr[1]);
    q=&(iArr[4]);

   printf("Data fetch by *p :%d\n:",*p);
   printf("Data fetch by *q: %d",*q);



    return 0;
}
