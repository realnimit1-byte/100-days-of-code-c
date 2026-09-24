//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/





#include <stdio.h>

int main()
{
    char str[200];
    int count[26] = {0};
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                printf("%c", str[i]);
                return 0;
            }
        }

        i++;
    }

    printf("No repeating alphabet");

    return 0;
}