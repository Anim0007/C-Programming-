#include<stdio.h>
int main ()
{

    char original[5],copied[5];
    printf("Enter original = ");
    scanf("%s",&original);

    strcpy(copied,original);

    printf("copied = %s",copied);
    getch();
}
