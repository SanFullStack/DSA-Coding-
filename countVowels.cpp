#include<bits/stdc++.h>
using namespace std;
int countVowel(string s, int l)
{
	//s = transform(s.begin(), s.end(), s.begin(), ::tolower);
	int count =0;
	
	for ( int i=0; i<=l; i++ )
	{
		s[i] = tolower(s[i]);
		if ( s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' )
		{
			count++;
		}
	}
	
	return count;
}
int main()
{
	string s;
	getline(cin,s);
	int l = s.length()-1;
	int n = countVowel(s, l);
	cout<<"No of vowels "<<n;
	
	return 0;
}