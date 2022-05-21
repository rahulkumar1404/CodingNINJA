// https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13

string rs(string& str,int i,int j){
	if(i>j) return str;
	swap(str[i],str[j]);
	i++;
	j--;
	return rs(str,i,j);
}
string reverseString(string str)
{
	// Write your code here.
	int i = 0;
	int j = str.length()-1;
	string ans = rs(str,i,j);
	return ans;
}
