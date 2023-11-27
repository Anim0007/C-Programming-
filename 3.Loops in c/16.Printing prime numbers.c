#include <stdio.h>

int main()
{
    int i, j, n, count;

    printf("Find prime numbers between 1 to : ");
    scanf("%d", &n);

    printf("All prime numbers are: ",n);

    for(i=2; i<=n; i++)
    {

        count = 0;


        for(j=2; j<=i-1; j++)
        {

            if(i%j==0)
            {
                count = 1;
                break;
            }
        }


        if(count==0)
        {
            printf("%d\t ", i);
        }
    }

    return 0;
}
