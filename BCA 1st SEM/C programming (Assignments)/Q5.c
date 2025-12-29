//WAP to show if the number is palindrome or not using do while loop

#include <stdio.h>

int main()
{
    int num, a, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;
    do
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    while(num > 0);

    if(a == reversed)
        printf("%d is a palindrome.\n", a);
    else
        printf("%d is not a palindrome.\n", a);
}
