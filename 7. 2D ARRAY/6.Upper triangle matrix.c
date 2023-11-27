int main()
{
    int array[10][10];
    int row, col, isUpper,i,j;

    printf("Enter elements in matrix: ",row,col);
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &array[i][j]);
        }
    }

      for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d  ",array[i][j]);

        }
        printf("\n");
    }

    isUpper = 0;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            if(j>i && array[i][j]!= 0)
            {
                isUpper = 1;
            }
        }
    }
    printf("\n");

    if(isUpper == 1)
    {
        printf("\nThe matrix is Upper triangular matrix.\n");
    }

    else
    {
        printf("\nThe matrix is not Upper triangular matrix.");
    }

    getch();
}
