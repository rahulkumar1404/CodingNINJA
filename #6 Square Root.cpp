/*
Square Root
Problem Statement
You are given a positive integer ‘N’. Your task is to find and return its square root. If ‘N’ is not a perfect square, then return the floor value of sqrt(N).
For example:
For ‘N’  = 25, return 5 , for ‘N’ = 20 return 4, for ‘N’ = 2 return 1.
Input Format:
The first line of input contains an integer ‘T’, denoting the number of test cases. Then each test case follows.

The first and the only line of each test case contains the Integer ‘N’.
Output Format:
For each test case, print a single line containing an integer denoting the square root of ‘N’.

The output of each test case will be printed on a separate line.
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 5
0 <= N <= 10 ^ 16

Time Limit: 1 sec.
Sample Input 1:
2
4
6
Sample Output 1:
2
2
Explanation Of Sample Input 1:
In the first test case, the square root of the given number 4 is 2.

In the second test case, the square root of the given number 6 lies between 2 and 3, so the floor value is 2.
Sample Input 2:
2
10
100
Sample Output 2:
3
10
Explanation Of Sample Output 2:
In the first test case, the square root of the given number 10 lies between 3 and 4, so the floor value is 3.

In the second test case, the square root of the given number 100 is 10.
*/

//code
long long int BS(long long int n){
	
	long long int s = 0;
	long long int e = n;
	  long long int mid =  s +(e-s)/2;
	  long long int ans = 0;
	if(n==0||n==1) return n;
	while(s<=e){
		  long long int st = n/mid;
		if(st==mid) {
			return mid;
		}else if(st>mid){
			ans = mid;
			s = mid + 1;
		}else{
			e = mid - 1;
		}
		mid = s +(e-s)/2;
	}
	return ans;
}
long long int sqrtN(long long int N)
{
	return BS(N);
}
