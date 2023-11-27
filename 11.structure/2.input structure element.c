#include<stdio.h>
//global structure
struct person
{
  int age;
  float salary;
};
int main()
{
    struct person person1,person2;

    printf("Enter Age For Person 1: ");
    scanf("%d",&person1.age);
    printf("Enter Salary For Person 1:  ");
    scanf("%f",&person1.salary);

    printf("Enter Age For Person 2:");
    scanf("%d",&person2.age);

    printf("Enter Salary For Person 2:\n");
    scanf("%f",&person2.salary);


    printf("Person1 : \n");
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);

    printf("Person2 : \n");
    printf("Age : %d\n",person2.age);
    printf("Salary : %.2f\n",person2.salary);


return 0;
}
