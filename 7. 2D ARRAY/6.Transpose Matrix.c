  #include<stdio.h>
int main()
{
    int i,j,row,col,transpose[10][10];
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

      printf("\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            transpose[j][i] = a[i][j];  /* transpose process */
        }
    }


    printf("transpose:\n");

    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }

        printf("\n");
    }

















}
