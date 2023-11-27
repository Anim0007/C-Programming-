#include<stdio.h>

int fact(int n)
{

    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int a;
    printf("enter number :");
    scanf("%d",&a);

    int result = fact(a);

    printf("the factorial = %d",result);

}

