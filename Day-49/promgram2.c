//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/




#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (lastSpace == -1)
    {
        printf("%s", name);
    }
    else
    {
        printf("%c ", name[0]);

        for (i = 1; i < lastSpace; i++)
        {
            if (name[i] == ' ' && name[i + 1] != ' ')
                printf("%c ", name[i + 1]);
        }

        printf("%s", name + lastSpace + 1);
    }

    return 0;
}