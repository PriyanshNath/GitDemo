#include <stdio.h>

struct Marksheet
{
    char name[50];
    int roll;
    int eng, math, phy, chem, cs;
    int total;
    float percent;
};

int main()
{
    struct Marksheet s[99]; // can store up to 99   students
    int n, i;
    printf("\n========== MARKSHEET GENERATOR ==========\n");
    printf("\nEnter number of students: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name); // reads single-word names

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks in English: ");
        scanf("%d", &s[i].eng);

        printf("Enter marks in Maths: ");
        scanf("%d", &s[i].math);

        printf("Enter marks in Physics: ");
        scanf("%d", &s[i].phy);

        printf("Enter marks in Chemistry: ");
        scanf("%d", &s[i].chem);

        printf("Enter marks in Computer Science: ");
        scanf("%d", &s[i].cs);

        s[i].total = s[i].eng + s[i].math + s[i].phy + s[i].chem + s[i].cs;
        s[i].percent = s[i].total / 5.0;
    }

    printf("\n\n========== STUDENT MARKSHEET ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\n---------------------------------------\n");
        printf("Name           : %s\n", s[i].name);
        printf("Roll No.        : %d\n", s[i].roll);
        printf("---------------------------------------\n");
        printf("English         : %d\n", s[i].eng);
        printf("Maths           : %d\n", s[i].math);
        printf("Physics         : %d\n", s[i].phy);
        printf("Chemistry       : %d\n", s[i].chem);
        printf("Computer Science: %d\n", s[i].cs);
        printf("---------------------------------------\n");
        printf("Total Marks     : %d\n", s[i].total);
        printf("Percentage      : %.2f\n", s[i].percent);

        if (s[i].percent >= 75)
            printf("Grade           : A\n");
        else if (s[i].percent >= 60)
            printf("Grade           : B\n");
        else if (s[i].percent >= 50)
            printf("Grade           : C\n");
        else if (s[i].percent >= 40)
            printf("Grade           : D\n");
        else
            printf("Grade           : F\n");
    }
}
