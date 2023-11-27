#include<stdio.h>
int main()
{

    int num,count,i;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i != 0)
        {
            printf("Number is prime");
            break;
        }
        else
        {
            printf("Number is not prime");
            break;
        }
    }
}
