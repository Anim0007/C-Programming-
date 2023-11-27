#include<stdio.h>
void display(char s[])
{
    int i;
    printf("string = ");
    while(s[i] != '\0')
    {
        printf("%c",s[i]);
        i++;
    }

}

int main()
{
    char a[5],i;
    printf("enter A :");

    gets(a);

    display(a);
}
