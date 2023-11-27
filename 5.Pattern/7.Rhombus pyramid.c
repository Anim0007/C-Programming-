#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);


    for (int row = 1; row < n; row++) {


        for (int col = 0; col <= n - row - 1; col++) {
            printf(" ");
        }

        for (int col = 0; col <= n; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
