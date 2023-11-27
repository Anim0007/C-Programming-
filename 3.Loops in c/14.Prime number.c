#include<stdio.h>
int main()

{

    int num,count=0,i;

    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }

    if (count ==0)
    {
        printf("Number is  prime");

    }
    else
    {
        printf("Number is not prime");
    }

}
