#include<stdio.h>

int maxmin(int arr1[])
{
    int max,min,i;

    max = min = arr1[0];
    for ( i=1; i<5; i++)
    {

        if(max < arr1[i] )
        {
            max = arr1[i];
        }

        if(min > arr1[i] )
        {
            min = arr1[i];
        }
    }

    printf("max = %d\t",max);
    printf("min = %d",min);

}


int main()
{
    int  arr[5],i,result;

    for (i=0; i<5; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);

    }

    result =     maxmin(arr);

    return 0 ;


}
