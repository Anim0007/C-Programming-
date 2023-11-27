#include<stdio.h>

int square(int a)
{
    return  a*a;
}

int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);

    int result = square(num);
    printf("the square of number : %d",result);
}
