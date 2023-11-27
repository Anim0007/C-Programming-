#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3]={ {3,4,6}, {2,4,6}, {5,3,5}, {3,4,1} };
printf( "matrix :\n" );

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


}

