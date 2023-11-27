/*Write a C program to count number of digits in any number.*/


#include<stdio.h>
int main()
{
    int num,count=0;

    printf("enter any number : ");
    scanf("%d",&num);

    while (num != 0 )
    {
        num = num/10;
        count++;
    }
    printf("total number of digit : %d",count);
}
