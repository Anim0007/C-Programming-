#include<stdio.h>

void prime(int x)
{

        if(x%2 == 0)
        {
            printf("Number is even");
        }
        else
        {
            printf(" odd");
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

