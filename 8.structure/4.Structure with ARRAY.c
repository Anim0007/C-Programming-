
#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter information for person %d\n",i+1);

        printf("Enter age : ");
        scanf("%d",&person[i].age);

        printf("Enter salary : ");
        scanf("%.2f",&person[i].salary);
    }

     for(i=0;i<3;i++)
    {
        printf(" Information for person %d\n",i+1);
        printf("age : %d\n",person[i].age);
        printf("salary : %.2f\n",person[i].salary);
    }

}
