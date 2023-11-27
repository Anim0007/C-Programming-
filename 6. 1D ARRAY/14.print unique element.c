#include <stdio.h>
int main()
{
    int  n,ctr=0;
    int i, j;
    printf("Input the number of elements : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0; j<n; j++)
        {
            if(i != j)
            {


            if(arr1[i]==arr1[j])
            {

             ctr++;
            }
            }
        }

    if(ctr==0)
    {
        printf("%d ",arr1[i]);
    }
}
}



