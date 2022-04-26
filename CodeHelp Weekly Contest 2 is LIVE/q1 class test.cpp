//problem link https://www.codingninjas.com/codestudio/contests/love-babbar-contest-ii/problems/14818

int classTest(int n, vector<int> &a, int k) {
    // Write your code here.
	sort(a.begin(),a.end());
	return a[n-k];
}
