//problem link: https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/problems/14804
//code
import java.util.*;
public class Solution {

    public static long appleAndCoupon(int n, int m, int[] arr) {
        
        // Write your Code Here
		Arrays.sort(arr);
		int sum = 0;
		int ci = n-m;
		for(int i = 0;i<n;i++){
			if(i==ci) continue;
			sum+=arr[i];
		}
		return sum;

    }
}
