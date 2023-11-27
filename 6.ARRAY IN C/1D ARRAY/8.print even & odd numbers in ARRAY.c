#include <stdio.h>
int main()
{
    int arr[4];
    int size, i,n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: \t");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("odd numbers are :\t  ");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2 != 0)
        {
            printf(" %d ",arr[i]);
        }
    }

    printf("\n");

    printf("even numbers are :\t  ");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            printf(" %d ",arr[i]);
        }
    }






}




















