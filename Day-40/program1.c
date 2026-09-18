//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/





#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, k;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (k = 0; k < c; k++)
    {
        i = 0;
        j = k;

        while (i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for (k = 1; k < r; k++)
    {
        i = k;
        j = c - 1;

        while (i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}