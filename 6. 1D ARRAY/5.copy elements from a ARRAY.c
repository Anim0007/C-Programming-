#include <stdio.h>

int main()
{
    int original[5];
    int copied[5];
    int i,n;


    printf(" how many originals  =");
    scanf("%d",&n);

    printf("original numbers are = ");

    for(i = 0; i < n; i++)
    {
        scanf("%d",&original[i]);
    }


    for(i = 0; i < n; i++)
    {
        copied[i] = original[i];
    }
    printf("copied \n");

    for(i = 0; i < n; i++)
    {
        printf("   %d", copied[i]);
    }

    return 0;

}

