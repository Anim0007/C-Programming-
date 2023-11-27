 /*Write a C program to check whether a number is divisible by 5 and 11 or
not.*/


#include<stdio.h>
int main()
{
    int num;
    printf(" enter number :");
    scanf("%d",&num);

    if (num%5 == 0 && num%11 == 0)
    {
        printf(" number is divisible by 5 and 11 ",num);
    }

    else if (num%5 == 0 && num%11 != 0)
    {
        printf("number is divisible by 5 but not divisible by 11",num);
    }
    else if (num%5 != 0 && num%11 == 0)
    {
        printf("number is not divisible by 5 and divisible by 11",num);
    }

    else
    {
        printf("number is not divisible by 5 and 11",num);

    }

}
