#include<stdio.h>
//global structure
struct person
{
  int age;
  float salary;
};
int main()
{
     struct person person1 = {35,56000};
    struct person person2,person3,person4;


    printf("Enter Age For Person 2: ");
    scanf("%d",&person2.age);

    printf("Enter Salary For Person 2:  ");
    scanf("%f",&person2.salary);

    person3.age = 45;
    person3.salary = 60000;

    person4 = person2;


    printf("Person1 : \n");
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);

    printf("Person2 : \n");
    printf("Age : %d\n",person2.age);
    printf("Salary : %.2f\n",person2.salary);

    printf("Person3 : \n");
    printf("Age : %d\n",person3.age);
    printf("Salary : %.2f\n",person3.salary);

     printf("Person4 : \n");
    printf("Age : %d\n",person4.age);
    printf("Salary : %.2f\n",person4.salary);



return 0;
}

