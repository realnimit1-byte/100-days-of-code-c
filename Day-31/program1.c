//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/





#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not Found");

    return 0;
}