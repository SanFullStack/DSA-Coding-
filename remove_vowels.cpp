#include<iostream>
using namespace std;
int isVowel(char s)
{
	if (  s=='A' || s=='E' || s=='I' || s=='O' || s=='U'
		|| s=='o' || s=='e' || s=='i' || s=='a' || s=='u' )
	{
		return 1;
	}
	return 0;
}
int main()
{
	string s="SAYANI";
	char st[100];
	int pos=0;
	int l = s.length();
	
	for ( int i=0; i<l; i++ )
	{
		if (isVowel(s[i])==0)
		{
			st[pos++] = s[i];
		}
	}
	
	st[pos] ='\0';
	
	cout<<st;
}