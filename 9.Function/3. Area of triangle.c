#include<stdio.h>

float area(int a,int b)
{
    return 0.5*a*b;
}

int main()
{
    float base,width;
    printf("Enter base and width : ");
    scanf("%f %f",&base,&width);

    int result = area(base,width);
    printf("the area : %d cm",result);
}
