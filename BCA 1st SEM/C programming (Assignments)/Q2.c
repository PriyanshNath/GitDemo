//write a program to display fibonacci series upto nth term using do while loop

#include <stdio.h>

main()
{
    int n, i = 2;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d", a, b);

    do
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
        i++;
    }
    while (i < n);
}