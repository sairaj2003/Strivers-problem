// Online C compiler to run C program online
/*
Problem Statement: Given a number of stairs. Starting from the 0th stair we need to climb to the “Nth” stair. At a time we can climb either one or two steps. We need to return the total number of distinct ways to 
reach from 0th to Nth stair.

*/
#include <stdio.h>

int waysToClimbnStairs(int n)
{
    if(n<=1)
    {
        return n;
    }
    
        int dp[n+1];
        
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=(dp[i-1] + dp[i-2]);
        }
    return dp[n];
}
int main() {
    int n;
    printf("\nEnter number of stairs:");
    scanf("%d",&n);
    
    int result=waysToClimbnStairs(n);
    printf("\nNumber of ways to climb %d stairs are %d",n,result);
    return 0;
}
