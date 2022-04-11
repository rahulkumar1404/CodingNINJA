//#10 Painter's Partition Problem.java
//problem link = "https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557"
//code in java

import java.util.*;
public class Solution 
{
    public static int findLargestMinDistance(ArrayList<Integer> boards, int k)
    {
	int s = 0;
	int ans = -1;
	int n = boards.size();
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum+=boards.get(i);
	}
	int e = sum;
	int mid = (e+s)/2;
	while(s<=e){
		if(isTrue(boards,k,n,mid)){
			ans = mid;
			e = mid -1;
		}else{
			s = mid + 1;
		}
		mid = (e+s)/2;
	}
	return ans;
	}
	static boolean isTrue(ArrayList<Integer> arr, int k,int n,int mid){
	int p = 1;
	int l = 0;
	for(int i=0;i<n;i++){
		if(arr.get(i)+l<=mid){
			l+=arr.get(i);
		}else{
			p++;
			if(p>k||arr.get(i)>mid) return false;
			l = arr.get(i);
			if(p>k) return true;
		}
	}
	return true;
	}
}
