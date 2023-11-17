#include<iostream>
using namespace std;
int main()
{
	string s = "suva112san56";
	int l = s.length();
	int sum = 0;
	
	for ( int i=0; i<l; i++ )
	{
		if ( isdigit(s[i]) )
		{
			sum += s[i] -'0';
		}
	}
	
	cout<<sum;
	
	return 0;
}