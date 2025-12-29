//WAP to find the sum of a series upto nth term using do while loop

#include <stdio.h>

main() 
{
    int n, i = 1, num = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    do
    {
        sum = sum + num;   // add current odd number
        num = num + 2;     // move to next odd number
        i++;               // increase term count
    }
    while (i <= n);
    printf("Sum of series up to %d terms = %d\n", n, sum);

}
