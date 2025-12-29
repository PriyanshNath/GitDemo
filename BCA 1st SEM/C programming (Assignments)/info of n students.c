//WAP to take 'n' number of student info and disp it


#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    char class[20];
    char address[100];
};

void input(struct Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter details of student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Class: ");
        scanf("%s", s[i].class);

        printf("Enter Address: ");
        scanf("%s", s[i].address);
    }
}

void display(struct Student s[], int n)
{
    int i;
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Class: %s\n", s[i].class);
        printf("Address: %s\n", s[i].address);
    }
}

int main()
{
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    input(s, n);
    display(s, n);
}
