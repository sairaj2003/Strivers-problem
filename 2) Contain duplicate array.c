/*
Contains Duplicate : Check if a value appears atleast twice
Problem Statement: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example:

Example 1:
Input: nums = [1, 2, 3, 1]
Output: true.
Explanation: 1 appeared two times in the input array.

Example 2: 
Input: nums = [1, 2, 3, 4]
Output: false
Explanation: input array does not contain any duplicate number. 
*/



#include <stdio.h>

int duplicateElements(int n,int arr[])
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                flag=1;
                return;
            }
        }
    }
    return flag=0;
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
    
    int result=duplicateElements(n,arr);
    if(result==0)
    {
        printf("\nFalse");
    }
    else
    {
        printf("\nTrue");
    }
    return 0;
}
