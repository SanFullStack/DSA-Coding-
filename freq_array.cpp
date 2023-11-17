#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {10, 30, 60, 10, 80, 30, 30, 80};
	int n = sizeof(a)/sizeof(a[0]);
	//int visited[n];
	
	sort(a, a+n);
	
	for( int i=0; i<n; i++ )
	{		
		if(a[i]!=-1)
		{
			int count=1;
			for( int j=i+1; j<n; j++ )
			{
				if(a[i]==a[j])
				{
					count++;
					a[j]=-1;
				}
			}
			if ( count>=2)
			cout<<a[i]<<" occured "<<count<<" times "<<endl;;			
		}		
	}
	
	return 0;
}