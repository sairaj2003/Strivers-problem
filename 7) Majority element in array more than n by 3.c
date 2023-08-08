/*
Majority Elements(>N/3 times) | Find the elements that appears more than N/3 times in the array
Problem Statement: Given an array of N integers. Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.


Examples
Example 1:
Input Format: N = 5, array[] = {1,2,2,3,2}
Result: 2
Explanation: Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.

Example 2:
Input Format:  N = 6, array[] = {11,33,33,11,33,11}
Result: 11 33
Explanation: Here we can see that the Count(11) = 3 and Count(33) = 3. Therefore, the count of both 11 and 33 is greater than N/3 times. Hence, 11 and 33 is the answer.
*/

#include <stdio.h>

int majorityElements(int n, int arr[]) 
{
    int candidate1=-1;
    int candidate2=-1;
    int count1=0;
    int count2=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate1)
        {
            count1++;
        }
        else if(arr[i] == candidate2)
        {
            count2++;
        }
       else if(count1==0)
        {
            candidate1=arr[i];
            count1=1;
        }
        else if(count2==0)
        {
            candidate2=arr[i];
            count2=1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    if (count1 > n / 3) {
        printf("Majority element 1: %d\n", candidate1);
    }
    if (count2 > n / 3) {
        printf("Majority element 2: %d\n", candidate2);
    }
    if(count1<n/3 && count2<n/3)
    {
        printf("\nThere is no majority element...");
    }
}


int main() {
    int n;
    printf("How many elements do you want in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    majorityElements(n, arr);

    return 0;
}
