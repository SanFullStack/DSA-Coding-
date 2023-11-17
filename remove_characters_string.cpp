#include<iostream>
using namespace std;
int main()
{
	string s = "suva23$san";
	int len = s.length();
	int po = 0;
	char ch[len];
	
	for ( int i=0; i<len; i++ )
	{
		if ( isalpha(s[i]) )
		{
			ch[po++] =s[i];
		}
	}
	
	cout<<ch;
	return 0;
}