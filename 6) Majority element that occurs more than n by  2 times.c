/*
Find the Majority Element that occurs more than N/2 times
Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

Examples
Example 1:
Input Format: N = 3, nums[] = {3,2,3}
Result: 3
Explanation: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

Example 2:
Input Format:  N = 7, nums[] = {2,2,1,1,1,2,2}

Result: 2

Explanation: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.


*/
#include <stdio.h>

int majorityElement(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;    
            }
        }
        if(cnt > (n/2)) 
        {
            return arr[i];
        }
    }
    return -1;
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
    
    int result=majorityElement(n,arr);
    printf("\nMajority element in array :%d",result);
    return 0;
}
