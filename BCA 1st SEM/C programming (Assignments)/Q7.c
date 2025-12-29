//WAP to show if the number is palidrome or not using do while loop

#include <stdio.h>

int main()
{
    int a, b, c = 0, d;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a;   // store original

    do
    {
        d = a % 10;
        c = c * 10 + d;
        a /= 10;
    }
    while(a > 0);

    if(b == c)
        printf("%d is a palindrome.\n", b);
    else
        printf("%d is not a palindrome.\n", b);
}
