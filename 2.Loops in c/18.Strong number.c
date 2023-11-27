#include<stdio.h>
int main()
{
    int num,r,i,fact,temp,sum=0;
    printf("enter a number :");
    scanf("%d",&num);

    temp = num;

    while(num!=0)
    {
        r = num % 10;
        fact=1;
        for(i=1; i<=r; i++)
        {
            fact = fact*i;
        }
        sum +=fact;
        num=num/10;
    }

       if(sum==temp)
       {
           printf("number is strong");

       }
       else
       {
           printf("number is not strong ");
       }

}
