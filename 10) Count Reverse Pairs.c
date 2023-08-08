/*
Count Reverse Pairs
Problem Statement: Given an array of numbers, you need to return the count of reverse pairs. Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].

Examples
Example 1:

Input: N = 5, array[] = {1,3,2,3,1)

Output: 2 

Explanation: The pairs are (3, 1) and (3, 1) as from both the pairs the condition arr[i] > 2*arr[j] is satisfied.

Example 2:

Input: N = 4, array[] = {3,2,1,4}

Output: 1

Explaination: There is only 1 pair  ( 3 , 1 ) that satisfy the condition arr[i] > 2*arr[j]

*/

#include <stdio.h>

int inversionCount(int n,int arr[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( arr[i] > (2*arr[j]) )
            {
                count++;
            }   
        }
    }
    return count;
}
int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=inversionCount(n,arr);
    printf("\ncount:%d",result);
    return 0;
}
