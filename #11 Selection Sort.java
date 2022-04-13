//#11 Selection Sort 
/*Problem link: https://www.codingninjas.com/codestudio/problems/selection-sort_981162?
*/
//code
import java.util.*;
public class Solution {
	public static void selectionSort(int arr[], int n) {
		// Write your code here.
		int i = 0;
		while(i<n-1){
			int minIndex = i;
			int j = i+1;
			while(j<n){
				if(arr[j] < arr[minIndex]) minIndex = j;
				j++;
			}
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
			i++;
		}
	}
}
