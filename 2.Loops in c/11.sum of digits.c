/*Write a C program to calculate sum of digits of any number.*/


#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("enter a number : ");
    scanf("%d",&num);


    temp=num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum +r;
        temp = temp/10;

    }
   printf( "sum of digit : %d",sum);
}
