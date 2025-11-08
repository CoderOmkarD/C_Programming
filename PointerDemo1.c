#include<stdio.h>

int main()
{
    int iValue=11;
    char cValue='M';

    int *iptr=&iValue;
    // char *cptr=&cValue;

    int *q=iValue;

    printf("Size of iptr:%lu\n",sizeof(iptr));
    // printf("Size of cptr:%lu\n",sizeof(cptr));

    printf("%lu\n",q);


    return 0;
}