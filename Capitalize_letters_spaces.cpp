#include<iostream>
using namespace std;
int main()
{
	string s = "sayani gorai";
	int l = s.length();
	
	for ( int i=0; i<l; i++ )
	{
		if ( i == 0 || i==l-1)
		{
			s[i] = toupper(s[i]);
		}
		else if ( s[i] == ' ')
		{
			s[i-1] = toupper(s[i-1]);
			s[i+1] = toupper(s[i+1]);
		}
	}
	
	cout<<s;
	
	return 0;
}