#include<iostream>
using namespace std;
bool isPalindrome(string s)
{
	int len=s.size();
	for( int i=0; i<len/2; i++ )
	{
		if( s[i]!=s[len-i-1] )
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	string s="ABCBA";
	if(isPalindrome(s))
	{
		cout<<"Palindorme";
	}
	else
	{
		cout<<"Not";
	}
	return 0;
}