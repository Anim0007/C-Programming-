#include<stdio.h>
int main()

{

int n,rem,sum=0;
scanf("%d",&n);

long int i=0;
while(n!=0)
{
    rem = n%10;
    sum = sum+(rem*pow(2,i));
    n=n/10;
    i++;
}
printf(" decimal =%d",sum);
}
