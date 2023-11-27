/*Write a C program to find first and last digit of any number.*/

#include<stdio.h>
int main()
{
    int num,first,last,count;

    printf("enter a number :");
    scanf("%d",&num);

    count = log10(num);

    first = num/pow(10,count);
    last = num % 10;

    printf("first = %d\n last = %d",first,last);

}
