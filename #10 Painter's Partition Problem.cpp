//#10 Painter's Partition Problem.cpp
//problem link = "https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557"
//code in c++

bool isTrue(vector<int> &arr, int k,int n,int mid){
	int p = 1;
	int l = 0;
	for(int i=0;i<n;i++){
		if(arr[i]+l<=mid){
			l+=arr[i];
		}else{
			p++;
			if(p>k||arr[i]>mid) return false;
			l = arr[i];
			if(p>k) return true;
		}
	}
	return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
	
	int s = 0;
	int ans = -1;
	int n = boards.size();
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum+=boards[i];
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
