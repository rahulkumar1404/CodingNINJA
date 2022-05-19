// https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11
int found(int *input, int s,int e, int val){
	if(s>e) return -1;
	int mid = s + (e-s)/2;
	if(input[mid]==val) return mid;
	if(input[mid]<val){
		found(input,mid+1,e,val);
	}else{
		found(input,s,mid-1,val);
	}
	
}
int binarySearch(int *input, int n, int val)
{
    //Write your code here
	int s = 0;
	int e = n-1;
	return found(input,s,e,val);
}
