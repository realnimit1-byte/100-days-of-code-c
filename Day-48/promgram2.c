//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/





#include <stdio.h>

int main()
{
    char str[200], temp;
    int i = 0, start, end;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;

        start = i;

        while (str[i] != ' ' &&
               str[i] != '\0' &&
               str[i] != '\n')
            i++;

        end = i - 1;

        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;
    }

    printf("%s", str);

    return 0;
}