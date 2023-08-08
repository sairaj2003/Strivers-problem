/*
Implement Pow(x,n) | X raised to the power N
Problem Statement: Given a double x and integer n, calculate x raised to power n. Basically Implement pow(x, n).

Examples:

Example 1:

Input: x = 2.00000, n = 10

Output: 1024.00000

Explanation: You need to calculate 2.00000 raised to 10 which gives ans 1024.00000

Example 2:

Input: x = 2.10000, n = 3

Output: 9.26100

Explanation: You need to calculate 2.10000 raised to 3 which gives ans 9.26100
*/
#include <stdio.h>

float power(float x, int n)
{
    float ans = 1.0;
    for (int i = 0; i < n; i++)
    {
        ans = ans * x;
    }
    return ans;
}

int main()
{
    float x;
    int n;

    printf("Enter base value (x): ");
    scanf("%f", &x);
    printf("Enter power value (n): ");
    scanf("%d", &n);

    float result = power(x, n);
    printf("Output: %f\n", result);

    return 0;
}
