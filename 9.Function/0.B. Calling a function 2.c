#include<stdio.h>
void england()
{
    printf("you are in england\n ");
    return 0;
}

void india()
{
    printf("you are in india\n");
    australia();
    return 0;
}


void australia()
{
    printf("you are in australia\n");
    england();
    return 0;
}
)

int main()
{
    india();
    return 0;
}

