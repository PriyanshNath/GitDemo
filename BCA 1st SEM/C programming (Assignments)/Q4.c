//WAP to find the sum of the following series upto nth term using do while loop

#include <stdio.h>

main()
{
    int n, i = 1;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while(i <= n);

    printf("Sum of the series up to %d terms = %d\n", n, sum);
}
