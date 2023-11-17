#include<iostream>
using namespace std;
int isConsider(char ch)
{
	if ( isalpha(ch) || isdigit(ch) )
	{
		return 1;
    } 
    return 0;
}

int main()
{
	string s="Mag2 i#si @2gAm";
	int l = s.length()-1;
	int i=0;
	int count=0;
	
	while ( i<l )
	{
		if ( isConsider(s[i]) == 0 )
		{
			i++;
		}
		else if ( isConsider(s[l]) == 0 )
		{
			l--;
		}
		else if ( tolower(s[i]) == tolower(s[l]) )
		{
			i++;
			l--;
		}
		else
		{
			cout<<"NOT Palindrome";
			count=1;
			break;
		}
	}
	
	if ( count==0 )
	{
		cout<<"Palindrome";
	}
	
	return 0;
}