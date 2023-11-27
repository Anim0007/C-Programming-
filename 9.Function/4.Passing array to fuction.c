#include<stdio.h>
void display(int x[])
{

    printf("arrays = ");
    for(int i=0; i<3; i++)
    {

        printf(" %d",x[i]);
    }
}

int main()
{
    int a[3],i;
    printf("enter A :");
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }

    display(a);


}

