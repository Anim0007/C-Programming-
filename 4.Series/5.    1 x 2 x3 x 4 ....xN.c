#include<stdio.h>
int main()
{
   int n, mul;;

   printf("Enter n value: \n");
   scanf("%d",&n);

    mul = 1;
    printf("%d",mul);
   for(int i=2; i<=n; i++)
   {
     printf(" x %d ",i);
     mul *= i; //sum = sum + i;
   }

   printf("= %d",mul);

   return 0;
}
