#include <stdio.h>

int main()
{
    int iArr[] = {11, 21, 51, 101, 111};
    int *p = NULL;
    int *q = NULL;

    p = &(iArr[1]);
    q = &(iArr[4]);

   
    printf("Result of Substraction is : %ld\n",q-p); //Allowed
    q=q-2;
    printf("The Data Pointed by q is: %d \n",*q);  //Allowed
    return 0;
}
