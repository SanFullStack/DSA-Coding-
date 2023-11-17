#include<iostream>
using namespace std;
void reverse(int i, int j, string &s)
{
	if ( i>j )
	{
		return ;
    }
    
	swap(s[i],s[j]);
	i++;
	j--;
	
	reverse(i,j,s);

//	cout<<s<<endl;
}
int main()
{
	string s;
	getline(cin,s);
	int i=0;
	int j=s.length()-1;
	reverse(i,j,s);
	cout<<s;
	return 0;
}