// problem link: https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4
vector<int> rev(vector<int> v){
	int s = 0;
	int e = v.size()-1;
	while(s<e){
		swap(v[s++],v[e--]);
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;
	int j=m-1;
	int c = 0;
	int sum;
	vector<int> ans;
	while(i>=0&&j>=0){
		int v1 = a[i];
		int v2 = b[j];
		sum = v1+v2+c;
		c = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	while(i>=0){
		sum = a[i]+c;
		c = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	while(j>=0){
		sum = b[j]+c;
		c = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	while(c!=0){
		sum = c;
		c = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	return rev(ans);
}
