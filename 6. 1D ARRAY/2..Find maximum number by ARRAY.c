#include<stdio.h>
int main()

{
    int a[6],i,max,min;
    printf("numbers are = ");

    for(i=0; i<=5; i++)
    {

        scanf("%d",&a[i]);
    }
    max = a[0];
    min= a[0];

    for(i=1; i<=5; i++)
    {
        if(a[i] > max)

        {
            max = a[i];
        }
        else if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("max = %d",max);
       printf("min = %d",min);

}

