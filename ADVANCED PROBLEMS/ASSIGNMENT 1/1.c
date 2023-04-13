// WAP to input name, roll number, and marks in 5 subjects for a student, and display it.
#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
    int marks[5];
};
int main()
{
    struct student s1;
    printf("ENTER STUDENT NAME :\n");
    gets(s1.name);
    printf("ENTER ROLL:\n");
    scanf("%d", &s1.roll);
    for (int i = 1; i <= 5; i++)
    {
        printf("ENETR MARKS %d\n", i);
        scanf("%d", &s1.marks[i]);
    }
    printf("\n");
    printf("INFORMATION OF THE STUDENT \n");
    printf("---------------------------\n");
    printf("NAME OF THE STUDENT :%s \n", s1.name);
    printf("ROLL OF THE STUDENT : %d\n", s1.roll);
    printf("MARKS ARE :  \n");
    for (int i = 1; i <= 5; i++)
    {
        printf("MARKS %d : %d \n", i, s1.marks[i]);
    }
    printf("\n");
    return 0;
}