/*#include<stdio.h>
int main ()
{

    char s1[15];
    int len;

    printf("Enter name = ");
    gets(s1);

    len = strlen(s1);

    printf("length = %d",len);
}

/*without strlen*/

#include<stdio.h>
int main ()
{

    char s1[15];
    int len=0;
    int i=0;

    printf("Enter name = ");
    scanf("%s",&s1);

    while(s1[i] != '\0')

    {
        i++;
        len++;
    }
    printf("%d",len);

}





