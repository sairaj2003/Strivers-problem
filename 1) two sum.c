/*
Two Sum : Check if a pair with given sum exists in Array
Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

Examples:

Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
Result: NO (for 1st variant)
	[-1, -1] (for 2nd variant)
Explanation: There exist no such two numbers whose sum is equal to the target.

*/

#include <stdio.h>

int twoSum(int n,int arr[],int target,int *index1,int *index2)
{
    *index1=-1;
    *index2=-1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i] + arr[j]) == target)
            {
                *index1=i;
                *index2=j;
                return;
            }
        }
    }
}

int main() {
    int n;
    int target;
    printf("\nHow many elements do you want to insert in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array",n);
    
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    
    printf("\nEnter target value:");
    scanf("%d",&target);
    int index1,index2;
    twoSum(n,arr,target,&index1,&index2);
    
    if(index1 == -1 && index2 == -1)
    {
        printf("\n{-1 , -1}");
    }
    else
    {
        printf("\n{ %d , %d}",index1,index2);
    }
    return 0;
}
