//problem link: https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?

//code
import java.util.*;
public class Solution {
    
    public static void bubbleSort(int[] arr, int n) {   
        // Write your code here.
		for(int i =0;i<n;i++){
			boolean small = false;
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					small = true;
				}
			}
			if(small==false) break;
		}
    }

}
