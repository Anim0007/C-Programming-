#include<stdio.h>
int main()
{
    int i,j,rowA,colmnA,rowB,colmnB,rowC,colmnC;
    int a[10][10],b[10][10],c[10][10];

    printf("Enter the number of rowA and colmnA:");
    scanf("%d %d",&rowA,&colmnA);

    printf("Enter the number of rowB and colmnB:");
    scanf("%d %d",&rowB,&colmnB);

    if(rowA != rowB ||  colmnA != colmnB)
    {
        printf("ERROR INPUT!\n");

        printf("Enter the number of rowA and colmnA:");
        scanf("%d %d",&rowA,&colmnA);

        printf("Enter the number of rowB and colmnB:");
        scanf("%d %d",&rowB,&colmnB);

    }

    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colmnA; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix A :\n" );

    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colmnA; j++)
        {
            printf("%d  ",a[i][j]);

        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colmnB; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix B :\n" );

    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colmnB; j++)
        {
            printf("%d  ",b[i][j]);

        }
        printf("\n");
    }


    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colmnB; j++)
        {
            c[i][j] = a[i][j] +b[i][j];
        }
    }
    printf("matrix C :\n" );

    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colmnB; j++)
        {
            printf("%d  ",c[i][j]);

        }
        printf("\n");
    }
}
