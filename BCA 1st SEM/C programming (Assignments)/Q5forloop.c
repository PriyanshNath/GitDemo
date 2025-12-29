//WAP to show if the number is palindrome or not using for loop

#include <stdio.h>

main()
{
    int num, a, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;

    for (; num > 0; num /= 10)  // loop until num becomes 0
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
    }

    if (a == reversed)
        printf("%d is a palindrome.\n", a);
    else
        printf("%d is not a palindrome.\n", a);
}
