/*
Search In Rotated Sorted Array
Problem Statement
You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘K’ is present in ARR.
Note :
1. If ‘K’ is not present in ARR then print -1.
2. There are no duplicate elements present in ARR. 
3. ARR can be rotated only in the right direction.
For example, if ARR = [12, 15, 18, 2, 4] and K = 2, then the position at which K is present in the array is 3 (0-indexed).
Follow Up
Can you do this in Logarithmic time and constant additional space? 
Input Format
The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case contains two single-space separated integers ‘N’ and ‘K’, respectively.

The second line of each test case contains ‘N’ single space-separated integers, denoting the elements of the array/list ARR.
Output Format :
For each test case return the index at which K is present in ARR.
Note:
You do not need to print anything; it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 100
1 <= N <= 5000
0 <= K <= 10^5
0 <= ARR[i] <= 10^5

Time Limit : 1 second
Sample Input 1:
2
4 3
8 9 4 5
7 2
2 4 5 6 8 9 1
Sample Output 1:
-1 
0
Explanation Of Sample Output 1:
For the first test case, 3 is not present in the array. Hence the output will be -1.

For the second test case, the occurrence of 2 is at index 0. Hence the output is 0.
Sample Input 2:
2
4 3
2 3 5 8
1 2
2
Sample Output 2:
1
0
*/
//code
int getpivot(vector<int>& nums , int n) {
        int s = 0;
        int e = n - 1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s = mid + 1 ;
            }else {
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        return s;
}
int binarySearch(vector<int>& nums , int s,int e,int k) {
        int start = s;
        int  end = e;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(nums[mid]==k){
                return mid;
            }else if(k>nums[mid]){
				start = mid + 1;
			}
			else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
	int pivot = getpivot(arr,n);
	if(k >= arr[pivot] && k <= arr[n-1]){
		return binarySearch(arr,pivot,n-1,k);
	}else{
		return binarySearch(arr,0,pivot-1,k);
	}
}

