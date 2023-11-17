#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	cout<<"String 1"<<endl;
	string s1;
	getline(cin,s1);
	cout<<"String 2 "<<endl;
	string s2;
	getline(cin,s2);
	
	int n = s1.length();
	int m = s2.length();
	int count=0;
	
	for ( int i=0; i<n; i++ )
	{
		if(s1[i]!=s2[i])
		{
			count=1;
			cout<<"\nHas wild character";
			break;
		}
	}
	
	if ( count == 0 )
	{
		cout<<"\nHas no wild character";
	}
	return 0;
}