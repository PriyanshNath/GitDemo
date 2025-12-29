// Write a program to Take an array of n numbers and find the sum of the numbers


#include <stdio.h>
main()
{
    int n, i, sum = 0;   
    int a[100];          

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("\nYou entered: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSum of the numbers = %d\n", sum);
}