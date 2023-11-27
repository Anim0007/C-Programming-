/*Write a C program to print all alphabets from a to z.-using while loop.*/

#include<stdio.h>

int main()
{
    char ch='z';


    while(ch >= 'a')
    {
        printf("%c ", ch);
        ch--;
    }


    return 0;
}
