#include<stdio.h>
void power(int a,int b)
{
    int result ;

    result = pow(a,b);

    printf("result = %d",result);
}

int main()
{
    int x,y;
    printf("enter the x and y :");
    scanf("%d %d",&x,&y);

     power(x,y);


}

