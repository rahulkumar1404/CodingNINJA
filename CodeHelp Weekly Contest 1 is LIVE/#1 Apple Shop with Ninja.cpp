//problem link: https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/problems/14804
//code
long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
	sort(arr.begin(),arr.end());
	int sum = 0;
	int ci = n-m;
	for(int i = 0;i<n;i++){
		if(i==ci) continue;
		sum+=arr[i];
	}
	return sum;
}
