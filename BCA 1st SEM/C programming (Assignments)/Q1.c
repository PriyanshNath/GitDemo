//Write a program to display days of week after taking integer input

#include <stdio.h>

main() 
{
    int a;
    printf("Enter any number between 1-7:\n");
    scanf("%d", &a);

    if(a==1)
        printf("Monday");
    else if(a==2)
        printf("Tuesday");
    else if(a==3)
        printf("Wednesday");
    else if(a==4)
        printf("Thursday");
    else if(a==5)
        printf("Friday");
    else if(a==6)
        printf("Saturday");
    else if(a==7)
        printf("Sunday");
    else                            //if the user ever puts any other value
        printf("Invalid input");

    return 0;
}
