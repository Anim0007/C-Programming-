#include<stdio.h>
void maximum(int x[])
{

    printf("MAXIMUM VALUE = ");
   int  maximum = x[0];
    for(int i=0; i<3; i++)
    {
       if(x[i] > x[0])
       {
           maximum = x[i];
       }

    }
    printf("%d",maximum);
}

int main()
{
    int a[3],i;
    printf("enter A :");
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }

    maximum(a);


}
