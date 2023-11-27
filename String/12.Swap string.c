#include<stdio.h>
int main ()
{

    char s1[5];
    char s2[5];
    char temp[5];


    printf("Enter string 1 = ");
    gets(s1);

    printf("Enter string2 = ");
    gets(s2);


    strcpy(temp,s1);       /* temp=s1  s1=empty  */
    strcpy(s1,s2);        /* s1=s2     s2=empty */
    strcpy(s2,temp);     /* s2=temp            */

    printf("Ater Swapping : \n");

    printf("string 1 : %s\n",s1);
    printf("string 2 : %s\n",s2);



}
