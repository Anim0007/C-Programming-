/*Write a C program to find maximum between three numbers.*/


#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf(" enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    {
        printf("max = %d",num1);
    }

    else if (num2>num3 && num2>num1)
    {
        printf("max = %d",num2);

    }
    else{

        printf("max = %d",num3);
    }

}
