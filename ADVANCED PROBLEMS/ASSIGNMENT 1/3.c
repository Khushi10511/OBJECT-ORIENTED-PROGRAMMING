/* iii. wap to enter id, name, age, and basic salary of n number of employees. calculate the
gross salary of all the employees and display it along with all other details in a tabular
form, using the pointer to structure.
[ gross salary= basic salary + da + hra,
da = 80% of basic salary
hra=10% of basic salary ] */

#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    int age;
    int basic;

}; //employ[100];

void result(struct employee *employ, int a);

int main()
{
    struct employee *ptr,employ[10];
    ptr = employ;
    int num;
    printf("Number of employees: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter id, name ,age and basic salary of employee %d : ", i + 1);
        scanf("%d %s %d %d", &(ptr+i)->id ,(ptr+i)->name,  &(ptr+i)->age,  &(ptr+i)->basic);
    }

    result(employ, num);

    return 0;
}

void result(struct employee *employ, int a)
{
    float da, hra,total;
    for (int i = 0; i < a; i++)
    {
        da = 0.8 *  (employ+i)->basic;
        hra = 0.1 *  (employ+i)->basic;
        total =  (employ+i)->basic + da + hra;
        printf(" \nId: %d \tName: %s \tAge: %d \tBasic Salary:%d \tGross Salary: %.3f\n\n", (employ+i)->id, (employ+i)->name, (employ+i)->age, (employ+i)->basic, total);
    }
}