#include <stdio.h>
int main()
{
    int i = 10;
    char ch = 'A';
    float no = 45.456;

    printf("%d", i);
    printf("\n");
    printf("%d", &i);
    printf("\n");
    printf("%d", sizeof(i));
    printf("\n");
    printf("%c", ch);
    printf("%d", &ch);
    printf("\n");
    printf("%d", sizeof(ch));
    printf("\n");
    printf("%f", no);
    printf("\n");
    printf("%d", &no);
    printf("\n");
    printf("%f", sizeof(no));

    return 0;
}