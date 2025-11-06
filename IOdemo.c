#include <stdio.h>
int main()
{
    char Div = '\0';
    int age = 0;

    printf("Enter your Division:\n");
    scanf("%c", &Div);

    printf("Enter your Age:\n");
    scanf("%d", &age);

    printf("Your Division is:%c\n", Div);
    printf("Your age is:%d\n", age);

    return 0;
}
