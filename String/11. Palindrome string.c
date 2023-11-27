#include<stdio.h>
int main ()
{

    char s1[15];
    char s2[15];
    int d;

    printf("Enter string = ");
    gets(s1);

    int i=0;
    int len=0;
    int j;

    while(s1[i] != '\0')
    {
        i++;
        len++;
    }

for(j=0 , i=len-1 ; i>=0 ; i-- , j++)
{
    s2[j] = s1[i];
}

s2[j] = '\0';

  printf("reverse string = %s\n",s2);

  d = strcmp(s1,s2);

  if(d == 0)
  {
      printf("is palindrome");
  }

  else
  {
      printf("not palindrome");

  }
}
