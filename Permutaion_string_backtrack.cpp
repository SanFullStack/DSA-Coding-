#include<iostream>
using namespace std;
//#include<vector>
void permute(string s, int index, int last)
{
	if ( index==last )
	{
		cout<<s<<" ";
	}
	//else
	//{
		for ( int i=index; i<=last; i++ )
		{
			swap(s[index], s[i]);
			permute(s, index+1, last);
			swap(s[index], s[i]);
		}
	//}	
}

int main()
{
	string s = "ABC";
	int l = s.size();
	
	permute(s, 0, l-1);
	//sort(ans.begin(), ans.end());
	
	return 0;
}