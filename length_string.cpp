#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int count = 0;
	
	for ( int i=0; s[i]!='\0'; i++ )
	{
		count++;
	}
	
	cout<<"Length of string "<<s<<" is : "<<count;
	
	return 0;
}