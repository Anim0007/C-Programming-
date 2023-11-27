#include<stdio.h>
int main()
{
    int x=10,y=2,sum=0;

    int *ptr1,*ptr2;
    ptr1 = &x;
    ptr2 = &y;
    sum = *ptr1 + *ptr2;
    printf("x + y = %d +%d = %d",*ptr1,*ptr2,sum);


}
