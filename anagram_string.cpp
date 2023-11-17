#include<iostream>
using namespace std;
int main()
{
	string s1 = "silent";
	string s2 = "listen";
	int l1 = s1.length();
	int l2 = s2.length();
	int a1[26] = {0};
	int a2[26] = {0};
	
	for ( int i=0; i<l1; i++)
	{
		a1[s1[i]]++;
	}
	/*int i=0;
	while(s1[i] != '\0')
	{
		a1[s[i]-'a']++;
	}*/
	
	for ( int i=0; i<l2; i++ )
	{
		a2[s2[i]]++;
	}
	
	int flag =0;
	for ( int i=0; i<26; i++ )
	{
		if ( a1[i] != a2[i] )
		{
			flag = 1;
			break;
		}
	}
	
	if ( flag == 0 )
	{
		cout<<"anagram";
	}
	else
	{
		cout<<"Not";
	}
	
	return 0;
}