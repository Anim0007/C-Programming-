#include<stdio.h>
int main()
{
    int a[3];
    int i,n,sum=0;

    printf("numbers are =");

       for(i=0;i<3;i++){
    scanf("%d",&a[i]);
       }
        for(i=0;i<3 ;i++)
        {
            sum=sum+a[i];

        }
        printf("the sum = %d",sum);
}
