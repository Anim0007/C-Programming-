#include<stdio.h>
int main ()
{

    char s1[15];
     char s2[15];


    printf("Enter s1 = ");
   gets(s1);

     printf("Enter s2 = ");
   gets(s2);

    strcat(s1,s2);

    printf("full name = %s ",s1);
}

/*#include<stdio.h>
int main ()
{

    char s1[] = "My name is ";
    char s2[] = "Anim ";

    strcat(s2,s1);

    printf("full name = %s",s2);
}

/*
#include<stdio.h>
int main ()
{

    char s1[17] = "My name is ";
    char s2[] = "Anim ";
    int i=0;
    int len=0;
    int j=0;

    while(s1[i] != '\0')
    {
        i++;
        len++;

    }

    while(s2[j] != '\0')
    {
        s1[len+j] = s2[j];
        j++;
    }

    printf("full name = %s",s1);


}
*/
