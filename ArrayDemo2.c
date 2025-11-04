#include<stdio.h>

int main()
{
    int iArr[4]={10,20,30,40};

    int iBrr[3];

    iBrr[0]=10;
    iBrr[2]=30;
    iBrr[1]=20;

    printf("%d\n",iArr[0]);
    printf("%d\n",iArr[1]);

    printf("%d\n",iBrr[0]);
    printf("%d\n",iBrr[1]);

    


    printf("Size of iArr is: %lu\n",sizeof(iArr));//16 bytes

    return 0;
}