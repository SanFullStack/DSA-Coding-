#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int checkPalindrome(string s1, int l1)
{
	int i=0;
	while(i<=l1)
	{
		if ( tolower(s1[i++]) != tolower(s1[l1--]) )
		{
			return 0;
			break;
		}
		/*else
		{
			swap(s1[i], s1[l1] );
		}*/
	}
	return 1;
}

int main()
{
	string s1 = "Ma11aM";
	//getline(cin,s);
	int l1 = s1.length()-1;
	
	if(checkPalindrome(s1, l1) )
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
    return 0;	
}