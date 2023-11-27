/*Write a C program to input all sides of a triangle and check whether triangle
is valid or not.*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides :");
    scanf("%d%d%d",&a,&b,&c);

    if (a+b >c && b+c>a && c+a>b )
    {
        printf("triangle is valid");
    }

    else
    {
        printf("triangle is invalid");

    }

}
