#include<iostream>
using namespace std;
int main()
{
	string s = "suva barman";
	int l = s.length()-1;
	//char s1[100];
	//int pos=0;
	
	/*for (int i=l-1; i>=0; i-- )
	{
		//s1[pos++] = s[i];
		cout<<s[i];
	}*/
	
	//cout<<s1;
	
	int i=0;
	while(i<l)
	{
		swap(s[i++],s[l--]);
	}
	
	cout<<s;
	return 0;
}