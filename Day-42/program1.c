//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/




#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, vowels = 0, consonants = 0;
    char ch;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' || ch == 'A' ||
                ch == 'E' || ch == 'I' || ch == 'O' ||
                ch == 'U')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels = %d\nConsonants = %d",
           vowels, consonants);

    return 0;
}