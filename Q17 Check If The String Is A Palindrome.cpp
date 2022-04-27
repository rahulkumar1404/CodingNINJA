// problem link https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
#include<bits/stdc++.h>
bool isValid(char ch){
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9') return true;
	else return false;
}
char tolower(char ch){
	if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9') return ch;
	else {
		char temp = ch-'A'+'a';
		return temp;
	}
}
bool checkPalindrome(string s)
{
    // Write your code here.
	int st = 0;
	int ed=s.size()-1;
	while(st<=ed){
		if(!isValid(s[st])) st++;
		else if(!isValid(s[ed])) ed--;
		else{
			if(tolower(s[st]) !=tolower(s[ed])){
				 return false;
			}else{
				st++;
				ed--;
			}
		}
	}
	return true;
}
