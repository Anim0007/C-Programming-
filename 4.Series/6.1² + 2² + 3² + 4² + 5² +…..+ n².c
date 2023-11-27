
#include<stdio.h>
int main()
{
   int n, mul5;

   printf("Enter n value: \n");
   scanf("%d",&n);

    mul = 1;
    printf("%d^2",mul);

   for(int i=2; i<=n; i++)
   {
       printf(" * %d^2",i);
       mul *= i*i*i;
   }

   printf("=%d",mul);

   return 0;
}
