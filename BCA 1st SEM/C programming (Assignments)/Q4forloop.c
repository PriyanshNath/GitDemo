//WAP to find the sum of the following series upto nth term using for loop
//1+2+3+...+n

#include <stdio.h>

main()
{
    int n, i, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the series up to %d terms = %d\n", n, sum);
}