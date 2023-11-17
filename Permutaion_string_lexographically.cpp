using namespace std;
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>

void permute(string &s, int index, int last, vector<string>&ans)
{
	if ( index==last )
	{
		ans.push_back(s);
		return;
	}
	for ( int i=index; i<=last; i++ )
	{
		swap(s[index], s[i]);
		permute(s, index+1, last, ans);
		swap(s[index], s[i]);
	}
}

int main()
{
	string s = "ABC";
	int l = s.size()-1;
	vector<string> ans;
	
	permute(s, 0, l, ans);
	sort(ans.begin(), ans.end());
	
	for (int i = 0; i < ans.size(); i++) 
	{
        cout << ans[i] << " " ;
    }
	
	return 0;
}