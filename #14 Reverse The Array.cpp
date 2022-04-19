//Problem Link : https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3
//code in c++
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int s = m+1, e = arr.size()-1;
	while(s<=e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}
