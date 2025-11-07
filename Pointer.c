#include<stdio.h>
int main(){
    int a=12;
    int *p=&a;
    int **o=&p;
    printf("The variable name is 'a' and its value is %d \n",a);
    printf("The variable name is 'a' and its address is in pointer 'p' which is %d \n",p);
    printf("%d \n",*p);

    printf("%d\n",&(a));
    printf("%d\n",&(p));
    printf("%d \n",&(*p));
    printf("%d \n",*o);
    printf("%d\n",**o);

}