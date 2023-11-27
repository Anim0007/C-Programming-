/*Write a C program to print all natural numbers in reverse (from n to 1).
using while loop.*/

#include <stdio.h>

int main() {
    int i,n;

    printf("Enter a positive number : ");
    scanf("%d",&n);


    for(i= n; i >= 0; i--) {
           printf("%d ",i);
    }

    return 0;
}
