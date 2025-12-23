#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int salary;
    int age;
};
int main(){
    struct Person person1;
    printf("Enter the person's name: ");
    char name[50];
    scanf("%[^\n]", name);
    strcpy(person1.name, name);
    printf("Enter the person's age: ");
    scanf("%d", &person1.age);
    printf("Enter the person's salary: ");
    scanf("%d", &person1.salary);

    printf("Result: %s %d %d", person1.name, person1.age, person1.salary);

}