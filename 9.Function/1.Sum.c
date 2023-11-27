#include<stdio.h>

int sum(int a,int b)    // sum() is a placeholder not variable, so we have to declare int a ,int b
{
    return a+b;
}

int sub(int x,int y)
{
    return x-y;
}

int mul(int x,int y)
{
    return x*y;
}


int main()
{
    int num1,num2,result;
    printf("enter two numbers :");
    scanf("%d %d",&num1,&num2);

    result = sum(num1,num2);
    printf("the sum = %d\n",result);


    result = sub(num1,num2);
    printf("the substract = %d\n",result);

     result = mul(num1,num2);
    printf("the multiply = %d\n",result);

    return 0;

}
