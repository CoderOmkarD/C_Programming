#include<stdio.h>
int main()
{
    int Food[]={12,11,34,55,66};
    printf("The first element is %d \n",Food[0]);
    printf("The base address is %d",Food);
    printf("The base address is %d",&Food[1]);
    return 0;
}