
#include<stdio.h>
void main()
{
    int num,count,i,n,prime,sum=0;
    printf("enter range :");
    scanf("%d",&n);
    printf(" sum of all prime numbers from 1 to %d = ",n);


    for(num=2;num<=n;num++)
    {
       prime =0;
        for(i=2;i<=num-1;i++)
        {
            if(num % i == 0)
            {
                prime = 1;
                break;
            }

    }

    if(prime==0)
    {
        sum += num;


    }

}
printf(" %d",sum);
}
