#include<stdio.h>
int main()
{
    int x=10,y=2;

    int *ptr;
    ptr = &x;
    printf("value of x = %d\n",*ptr);
    printf("address of x = %d\n",&y);
     printf("value of x = %d\n",*(&y));

     ptr = &y;
    printf("value of y = %d",*ptr);
     printf("address of x = %d\n",&y);
     printf("value of y = %d\n",*(&y));

}
