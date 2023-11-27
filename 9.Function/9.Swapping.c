#include<stdio.h>

void swap(int x,int y)
{

    int temp = x;
    x=y;
    y=temp;


    printf("\nAfter swapping: n1 = %d\t n2 = %d",x,y);
}


int main()
{
    int n1,n2,result;

    printf(" enter n1 and n2 = ");
    scanf("%d %d",&n1,&n2);
    printf("before swapping = n1 = %d\t n2 = %d",n1,n2);



    swap(n1,n2);



    return 0;

}



