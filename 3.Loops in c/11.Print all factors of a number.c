/*Write a C program to enter any number and print all factors of the number.*/


#include<stdio.h>
int main()
{
     int num,count;
    printf("enter a number : ");
    scanf("%d",&num);

    for (count=2;count<=num;count++)
    {


        if(num % count == 0)
    {
        printf(" factors are %d\n",count);
    }
    }
}
