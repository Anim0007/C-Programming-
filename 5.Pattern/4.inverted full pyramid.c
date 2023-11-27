/* * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *                 */


#include <stdio.h>
int main() {
   int n, row,col;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (row = n; row >= 1; --row) {
      for (col = 0; col < n - row; ++col)
         printf("  ");
      for (col = row; col <= 2 * row - 1; ++col)
         printf("* ");
      for (col = 0; col < row - 1; ++col)
         printf("* ");
      printf("\n");
   }
   return 0;
}
