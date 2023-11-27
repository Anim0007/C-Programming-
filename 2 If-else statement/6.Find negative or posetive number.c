/*Write a C program to check whether a number is negative, positive or zero.*/SS


#include<stdio.h>
int main()
{

int num;
    printf(" enter number :");
    scanf("%d",&num);

    if (num>0)
    {
        printf(" number is positive ",num);
    }

    else if (num<0)
    {
        printf("number is negatve",num);

    }
    else{

        printf("number is zero",num);
    }

}

