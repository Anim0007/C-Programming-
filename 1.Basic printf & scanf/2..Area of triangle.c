#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, s, area;
    printf("\nEnter three sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;


    area = sqrt(s*(s-a)*(s-b)*(s-c));


    printf("\n Area of triangle: %.2f\n",area);

    return 0;
}
