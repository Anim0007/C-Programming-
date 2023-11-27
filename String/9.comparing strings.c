#include<stdio.h>
int main ()
{

    char s1[15];
     char s2[15];


    printf("Enter s1 = ");
    scanf("%s",&s1);

     printf("Enter s2 = ");
    scanf("%s",&s2);

    int d = strcmp(s1,s2);
    printf("%d",d);

    if(d==0)
    {
        printf("strings equal");
    }

    else
    {
          printf("strings not equal");
    }
}




