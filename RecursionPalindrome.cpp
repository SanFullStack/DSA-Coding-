#include<iostream>
using namespace std;
bool CheckPalindrome(string &s, int i, int j)
{
	if ( i>j )
	{
	   return true;
	}
	
	if ( s[i] != s[j] )
	{
		return false;		
	}
	else
	{
		CheckPalindrome(s,i+1,j-1);		
	}	
}
int main()
{
	string s;
	getline(cin,s);
	bool isPalindrome = CheckPalindrome(s, 0, s.length()-1);
	if (isPalindrome)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	return 0;
}