/*
    Binary Search

    Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 

Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
All the integers in nums are unique.
nums is sorted in ascending order.

    */#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int x)
{
    while (s <= e) {
        int mid = s + (e - s) / 2;

       
        if (arr[mid] == x)
            return mid;

        
        if (arr[mid] < x)
            s = mid + 1;

        
        else
            e = mid - 1;
    }

    
    return -1;
}


int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int key = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr,0,n-1,key);
    if( result == -1){
        cout << " not present ";

    }else{
        cout << "present at " << result;
    }

}