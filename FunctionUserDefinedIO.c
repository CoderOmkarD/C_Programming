#include<Stdio.h>
int Addition(int iNo1,int iNo2)
{
    int iSum=0;
    iSum=iNo1+iNo2;
    return iSum;

}
int main()
{
    int iValue1=0,iValue2=0, iAns=0;

    printf("Enter the First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number:\n");
    scanf("%d",&iValue2);

    iAns=Addition(iValue1,iValue2);

    printf("The Addition is :- %d \n",iAns);
    
    return 0;

}