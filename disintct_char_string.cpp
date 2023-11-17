#include<iostream>
using namespace std;
int main()
{
	string s = "sayani gorai";
	int l = s.length();
	int freq[256] = {0};
	
	for ( int i=0; i<l; i++ )
	{
		freq[s[i]]++;
	}
	
	for ( int i=0; i<256; i++ )
	{
		if ( freq[i]==1 )
		{
			cout<<char(i);
		}
	}
	
	return 0;
}