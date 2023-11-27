#include<stdio.h>
void calc(float x,char z,float y)
{

float result;
 switch(z)
    {
        case '+':
             result =  x + y;
            break;

        case '-':
            result  =   x - y;
            break;

        case '*':
            result =  x* y;
            break;

        case '/':
            result = x / y;
            break;

        default:
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", x, z, y, result);

    return 0;
}


int main()

{
    char op;
    float n1, n2;


    printf("enter n1 , op , n2 = ");
    scanf("%f %c %f", &n1, &op, &n2);

    calc(n1,op,n2);


}
