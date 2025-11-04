#include <stdio.h>

int main()
{
    int iArr[5] = {10, 20, 30, 40, 50};

    printf("Size of iArr:%lu\n", sizeof(iArr)); // 20

    printf("iArr: %lu\n", iArr);//100
    printf("&iArr: %lu\n", &iArr);//100

    printf("iArr +1 %lu \n", iArr + 1);//104

    printf("&(iArr)+1: %lu\n", &(iArr) + 1);//120

    return 0;
}