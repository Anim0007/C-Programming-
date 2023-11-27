     /*#include<stdio.h>
int main ()
{

    char s1[15];


    printf("Enter string = ");
    gets(s1);

    strrev(s1);

    printf("reverse string = %s",s1);

}*/

/* without strrev */

#include<stdio.h>
int main ()
{
    char s1[15];
    char s2[15];
    printf("Enter string = ");
    gets(s1);

    int i=0,len=0,j;

    while(s1[i] != '\0')
    {
        i++;
        len++;
    }
    for( j=0 , i=len-1 ; i>=0 ; i-- , j++)
{
    s2[j] = s1[i];
}

s2[j] = '\0';

    {
        printf("reverse string = %s",s2);
    }


}



