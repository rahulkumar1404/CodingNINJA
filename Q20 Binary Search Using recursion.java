// https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11
import java.util.*;
public class Solution { 

    public static int binarySearch(int[] arr, int x) {
    	//Your code goes here
		int s = 0;
		int e = arr.length-1;
		int ans = found(arr,s,e,x);
		return ans;
    }
	static int found(int[] arr, int s,int e, int x){
		int res = 0;
		if(s>e) return -1;
		int mid = s + (e-s)/2;
		if(arr[mid]==x) return mid;
		if(arr[mid]<x){
			res = found(arr,mid+1,e,x);
		}else{
			res = found(arr,s,mid-1,x);
		}
		return res;
	}
}
