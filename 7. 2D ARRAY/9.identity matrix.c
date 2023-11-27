#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter the row & column : ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the elements : ");
    for (int i=0 ; i<a ; i++)
    {
        for (int j=0 ; j<b ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour input matrix is : \n");
    for (int i=0 ; i<a; i++)
    {
        for (int j=0 ; j<b ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int identity = 0;
    for (int i=0 ; i<a; i++)
    {
        for (int j=0 ; j<b ; j++)
        {
            if (i == j && arr[i][j]!=1 )
            {
                identity=1;
            }
             if (i != j && arr[i][j]!=0 )
            {
                identity=1;
            }
            break;

        }
    }


    if(identity == 0)
    {
        printf("matrix is ");
    }
    else
    {
        printf("not");
    }

    return 0;
}
