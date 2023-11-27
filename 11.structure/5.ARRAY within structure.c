
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

int main()
{

    struct Person person[5];
    char personName[20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter information for person %d\n", i + 1);
        printf("Enter Name: ");

        fgets(personName, sizeof(personName), stdin);
        personName[strcspn(personName, "\n")] = '\0';
        strcpy(person[i].name, personName);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);
        printf("Enter Salary: ");
        scanf("%f", &person[i].salary);
        getchar();//clear input buffer for string....
        printf("\n");
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("information of person %d\n", i + 1);
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %f\n", person[i].salary);
        printf("\n");
    }

    return 0;
}
