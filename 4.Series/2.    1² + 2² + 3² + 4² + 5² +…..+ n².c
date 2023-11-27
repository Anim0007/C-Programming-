
#include<stdio.h>
int main()
{
   int n, sum;

   printf("Enter n value: \n");
   scanf("%d",&n);

    sum = 1;
    printf("%d^2",sum);

   for(int i=2; i<=n; i++)
   {
       printf(" + %d^2",i);
       sum += i*i;
   }

   printf("=%d",sum);

   return 0;
}
