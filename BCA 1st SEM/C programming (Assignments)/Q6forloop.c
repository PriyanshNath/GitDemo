//WAP to find the factorial of an integer number using for loop 

#include <stdio.h>

main()
{
    int n, fact = 1, i, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // store original value for display

    for (i = n; i > 1; i--) 
    {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", temp, fact);
}
