/*Write a C program to find all roots of a quadratic equation.*/


#include<stdio.h>
int main()
{
    float a,b,c,root_part,root1,root2;
    printf("enter values of a,b,c = ");
    scanf("%f%f%f",&a,&b,&c);

   root_part = sqrt(b*b - 4*a*c);

   root1 = (-b + root_part)/(2*a);

     root2 = (-b - root_part)/(2*a);

     printf( "root 1 = %.0f\n",root1);


     printf( "root 2 = %.0f",root2);



    }
