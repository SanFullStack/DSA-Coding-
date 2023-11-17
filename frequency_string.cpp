
#include<iostream>
using namespace std;
int main()
{
	string s = "sayani gor@ai";
	int l = s.length();
	int freq[256] = {0};
	
	for ( int i=0; i<l; i++)
	{
		freq[s[i]]++; 
	}
	
	for ( int i=0; i<256; i++ )
	{
		if ( freq[i] != 0 )
		cout<<"freq of "<<char(i)<<" is "<<freq[i]<<endl;
	}
	
	return 0;
}