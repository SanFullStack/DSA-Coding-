#include<iostream>
using namespace std;
int main()
{
	string s ="san loves suva 123 "; 
	int len = s.length();
	char ch[len];
	int pos =0;
	
	for ( int i=0; i<len; i++ )
	{
		if (s[i] != ' ')
		{
			ch[pos++ ] = s[i];
		}
	}
	
	cout<<ch;
	return 0;
	
}