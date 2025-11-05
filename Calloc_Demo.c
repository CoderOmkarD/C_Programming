#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the no. of elements : \n");
    scanf("%d", &length);
    //Step 1:Allocate the Memory
    Arr = (int *)calloc(length , sizeof(int));
    if (Arr = NULL)
    {
        printf("Enable to allocate the memory\n");
    }
    else
    {
        printf("Memory Get Allocated Successfully\n");
    }
    //Step 2:Use the memory

    //step 3:Free the memory

    free(Arr);

    return 0;
}