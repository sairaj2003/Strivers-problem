/*
Kadane’s Algorithm : Maximum Subarray Sum in an Array
Problem Statement: Giaven an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Examples
Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output: 6 

Explanation: [4,-1,2,1] has the largest sum = 6. 

Examples 2: 

Input: arr = [1] 

Output: 1 

Explanation: Array has only one element and which is giving positive sum of 1. 
. 
*/


#include <stdio.h>

int maxSubarray(int n,int arr[])
{
    int max_sum=arr[0];
    int curr_sum=arr[0];
    for(int i=1;i<n;i++)
    {
        curr_sum=curr_sum + arr[i];
        if(curr_sum > max_sum)
        {
            max_sum=curr_sum;
        }
    }
    return max_sum;
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    printf("\nEnter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=maxSubarray(n,arr);
    printf("\nmax sum:%d",result);
    return 0;
}
