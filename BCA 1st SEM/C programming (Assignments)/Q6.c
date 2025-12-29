//WAP to find the factorial of an integer number using do while loop 

#include <stdio.h>
main()
{
    int n, fact = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;  // keep original value for display
    do
    {
        fact *= n;
        n--;
    }
    while(n > 1);
    printf("Factorial of %d is %d\n", temp, fact);
}
