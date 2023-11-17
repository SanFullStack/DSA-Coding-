#include<iostream>
using namespace std;
char isVowel(char s)
{
	char S;
	S = toupper(s);
	if (S=='A' || S=='E' || S=='I' || S=='O' || S=='U' )
	{
		return 1;
	}
	return 0;
}
int main()
{
	char s;
    cin>>s;
	
	if(!isalpha(s))
	{
		cout<<"Not alphabet";
	}
	else if ( isVowel(s) )
	{
		cout<<"Is vowel";
	}
	else
	{
		cout<<"Is consonant";
	}
	
	return 0;
}