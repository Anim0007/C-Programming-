#include<stdio.h>
int main()
{
    int i,n,*ptr;
    printf("enter n");
    scanf("%d",&n);


    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d\t ",x[i]);
    }

    ptr = &x[2];

    printf("element = ");


    for(i=0; i<n; i++)
    {
        printf(" %d ",*ptr);
        break;
    }







}

