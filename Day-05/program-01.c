//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/


#include <stdio.h>
int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input.\n");
        return 1;
    }


    simple_interest = (principal * rate * time) / 100.0;

    double factor = 1.0 + (rate / 100.0);
    double amount = principal;
    
    for (int i = 0; i < (int)time; i++) {
        amount *= factor;
    }
    
    compound_interest = amount - principal;

    printf("Simple Interest=%.2g, Compound Interest=%.2g\n", simple_interest, compound_interest);

    return 0;
}
