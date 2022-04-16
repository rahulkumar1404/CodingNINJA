//problem link : https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

//code

public class Solution {

	public static void insertionSort(int n , int[] arr) {
		// Write your code here.

		int i = 1;
		while(i<n){
			int temp = arr[i];
			int j = i-1;
			while(j>=0){
				if(arr[j]>temp){
					arr[j+1] = arr[j];
				}else break;
				j--;
			}
			arr[j+1] = temp;
			i++;
		}
	}
}
