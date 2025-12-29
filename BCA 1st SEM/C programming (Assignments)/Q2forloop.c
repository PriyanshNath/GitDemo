//write a program to display fibonacci series upto nth term using for loop

#include <stdio.h>

main()
{
    int n, i, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d", a, b);

    for(i = 2; i < n; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
}
