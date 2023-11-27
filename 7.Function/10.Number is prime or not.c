#include<stdio.h>

void prime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i == 0)
        {
            printf("Number is not prime");
            break;
        }
        else
        {
            printf(" prime");
            break;
        }
    }
}

int main()
{
    int a;

    printf("enter number = ");
    scanf("%d",&a);

    prime(a);

    return 0;

}

