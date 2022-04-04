/*
Intersection Of Two Arrays

Problem Statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
Input Format :
The first line of the input contains an integer 'T', denoting the number of test cases.

The first line of each test case contains two integers 'N' 'M', denoting the size of the two arrays.

The second line of each test case contains 'N' space-separated integers denoting the elements of the first array.

The third line of each test case contains 'M' space-separated integers denoting the elements of the second array.
Output Format :
The only line of output of each test case contains 'K' space-separated integers which correspond to the intersection of the two arrays A and B.

The output of each test case will be printed on a separate line.
Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Follow Up:
Can we solve this problem using the time complexity of O(max(N, M)).
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation For Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1
*/
//code in c++

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    int i=0,j=0;
        vector<int> res; 
        while(i<n && j<m){
            if(arr1[i]==arr2[j]){
                res.push_back(arr1[i]);
                i++;
                j++;
            }else if(arr1[i]<arr2[j]){
                i++;
            }
            else j++;
        }
        return res;
        
}
