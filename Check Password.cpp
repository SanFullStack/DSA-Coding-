#include<bits/stdc++.h>
using namespace std;

bool CheckPassword(string s, int n)
{
	if(n<4)
	{
		return 0;
	}
	if( s[0]-'0'>=0 && s[0]-'0'<=9 )
	{
		return 0;
	}
	
	int i=0;
	int countCap=0;
	int countNum=0;
	
	for( i=0; i<n; i++ )
	{
		if(s[i]==' ' || s[i]=='/')
		{
			return 0;
		}
		if( s[i]>='A' && s[i]<='Z' )
		{
			countCap++;
		}
		if ( s[i]-'0'>=0 && s[i]-'0'<=9 )
		{
			countNum++;
		}
	}
	
	if( countCap==0 || countNum==0 )
	{
		return 0;
	}
	
	return 1;
}
int main()
{
	string s;
	getline(cin,s);
	int n = s.size();
	bool m = CheckPassword(s,n);
	if( m )
	{
		cout<<"Valid Password";
	}
	else
	{
		cout<<"Invalid Password";
	}
	return 0;
}