//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/





#include <stdio.h>
int main()
{
    long long n, result = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    if (n == 0)
    {
        printf("1");
        return 0;
    }

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result += digit * place;
        place *= 10;
        n /= 10;
    }

    printf("%lld", result);

    return 0;
}