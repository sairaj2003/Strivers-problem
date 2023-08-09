
/*
Length of the longest subarray with zero Sum
Problem Statement: Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.
*/
#include <stdio.h>

int max(int a,int b)
{
    return (a > b) ? a :b ;
}
int elementsWithSumZero(int n,int arr[])
{
    int max_length=0;
    for(int i=0;i<n;i++)
    {
       int current_sum=0;
       for(int j=i;j<n;j++)
       {
           current_sum+=arr[j];
           if(current_sum==0)
           {
               max_length=max(max_length,j-i+1);
           }
       }
    }
    return max_length;
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d Elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=elementsWithSumZero(n,arr);
    printf("Length of the longest subarray with zero sum: %d\n", result);

    return 0;
}
