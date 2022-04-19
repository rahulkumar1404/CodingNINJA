//Problem Link : https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3
//code in java
import java.util.*;

public class Solution 
{
    public static void reverseArray(ArrayList<Integer> arr, int m)
    {
        // Write your code here.
		int s = m+1, e = arr.size()-1;
		while(s<=e){
			Collections.swap(arr, s, e);
			s++;
			e--;
	  }
    }
}

