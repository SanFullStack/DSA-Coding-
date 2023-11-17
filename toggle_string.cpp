#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n = s.length();
	
	for ( int i=0; i<n; i++ )//s[i]!='\0'; i++ )
	{
		if ( s[i]>='A' && s[i]<='Z' )
		{
			s[i] = tolower(s[i]);
			// s[i] = s[i] - 32;
		}
		else
		{
			s[i] = toupper(s[i]);
			// s[i] = s[i] + 32;
		}
	}
	
	cout<<"Toggeled string "<<s;
	
	return 0;
}