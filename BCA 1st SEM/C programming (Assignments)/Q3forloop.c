//WAP to find the sum of odd series upto nth term using for loop


#include <stdio.h>

main() 
{
    int n, i, num = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        sum = sum + num;   // add current odd number
        num = num + 2;     // move to next odd number
    }

    printf("Sum of series up to %d terms = %d\n", n, sum);
}

