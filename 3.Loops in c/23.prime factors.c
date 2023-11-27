#include<stdio.h>
int main()
{


    int num,i,j,count=0;
    printf("enter a number :");
    scanf("%d",&num);
 printf("prime factors : ");
    for(i=2;i<=num;i++)
    {
        if(num%i == 0)
        {
                count=0;
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;

                }
            }
            if(count==1)
            {
                printf(" %d\t",i);

            }
        }
    }
}
