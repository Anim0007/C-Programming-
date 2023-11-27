
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);


    for (int row = 0; row < 2 * n - 1; row++) {


        int comp;
        if (row < n) {
            comp = 2 * row + 1;
        }
        else {
            comp = 2 * (2 * n - row) - 3;
        }


        for (int col = 0; col < comp; col++) {
            printf(" ");
        }


        for (int col = 0; col < 2 * n - comp; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
