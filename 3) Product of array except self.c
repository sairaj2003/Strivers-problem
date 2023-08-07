/*
238. Product of Array Except Self            Medium
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
. 
*/


#include <stdio.h>

int productOfArray(int n,int arr[],int temp[])
{
    for(int i=0;i<n;i++)
    {
        int product=1;
        for(int j=0;j<n;j++)
        {
            if(i != j)
            {
                product=product*arr[j];   
            }
        }
        temp[i]= product;
    }
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
    
    productOfArray(n,arr,temp);
    printf("\nArray:");
    for(int i=0;i<n;i++)
    {
        printf("%5d",temp[i]);
    }
    return 0;
}
