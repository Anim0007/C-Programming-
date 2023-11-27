
#include<stdio.h>
int main()
{
    int a[6]= {4,1,7,34,2,5};

    int value=34;
int pos;
    int i;

    for(i=0; i<6; i++)
    {
        if(value == a[i])
        {
            pos = i + 1;
            break;

        }
    }

    printf("item at %d position",pos);

}
