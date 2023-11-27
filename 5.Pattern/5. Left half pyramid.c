#include <stdio.h>

int main()
{
    int n = 5;



    for (row = 1; row < = n; row++)
        {


        for (int col = 1; col < 2 * (n - row) - 1; col++) {
            printf(" ");
        }

        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
