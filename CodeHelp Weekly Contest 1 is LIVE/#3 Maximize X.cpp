// Problem Link: https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/problems/14804
//code in c++
bool isTruhh(int n, vector<vector<int>> &arr, int B,int mid){
	int tcount = 0;
	for(int i = 0;i<n;i++){
		for(int j = 1;j<=arr[i][0];j++){
			if(arr[i][j]<=mid){
				tcount+=arr[i][j];
			}
		}
		if(tcount>B) return false;
	}
	return true;
}
int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    //Write your code here.
	int s = 0,e=0;
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum =0;
		for(int j = 1;j<=arr[i][0];j++){
			sum+=arr[i][j];
		}
		e=max(e,sum);
	}
	int mid = s+(e-s)/2;
	int ans = -1;
	while(s<=e){
		if(isTruhh(n,arr,B,mid)){
			ans = mid;
			s = mid+1;
		}
		else e = mid-1;
		mid = s+(e-s)/2;
	}
	return ans;
}
