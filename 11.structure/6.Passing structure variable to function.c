#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

void display( struct person p)
{
  printf("Name = %s",p.name);
  printf("age = %d",p.age);
  printf("salary = %s",p.salary)
}

int main()
{

    struct Person person1;
    char personName[20];

    strcpy(person1.name,"asef mahdi");
    person1 age = 23;
    person1.salay = 45000;

    display(person1)

}
