/*Write a C program to check whether the triangle is equilateral, isosceles or
scalene triangle.*/



#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides :");
    scanf("%d%d%d",&a,&b,&c);

    if (a == b == c )
    {
        printf("triangle is equliteral");
    }

    else if (a == b || a == c || b == c )
    {
        printf("triangle is isoceles");
    }

    else
    {
        printf("triangle is scalene");
    }



}
