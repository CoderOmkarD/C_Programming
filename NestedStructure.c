#include <stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo dobj; // Nested
};
int main()
{

    printf("The size of Hello structure i s:%lu\n", sizeof(struct Hello)); // 16

    return 0;
}