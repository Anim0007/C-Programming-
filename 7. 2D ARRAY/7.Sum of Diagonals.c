#include<stdio.h>
int main()
{
    int i,j,row,col,sum=0;
    int a[10][10];

     printf("Enter the number of row and col:");
    scanf("%d %d",&row,&col);


    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix A :\n" );

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d  ",a[i][j]);

        }
        printf("\n");
    }

     for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("sum of diagonals = %d",sum);

}


