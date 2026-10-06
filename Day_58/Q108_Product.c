/* Q108 (Logic Enhancers)
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>

int main()
{
    int nums[100], answer[100], n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int product = 1;

    for(int i = 0; i < n; i++)
    {
        answer[i] = product;
        product *= nums[i];
    }

    product = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        answer[i] *= product;
        product *= nums[i];
    }

    printf("Answer: ");
    for(int i = 0; i < n; i++)
        printf("%d ", answer[i]);

    return 0;
}