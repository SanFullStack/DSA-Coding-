#include<iostream>
using namespace std;
int main()
{
	int n=4;
	int k=1;
	int pro=1;
	int sum=0;
	
	for ( int i=1; i<n; i++ )
	{
		for ( int j=0; j<i; j++ )
		{
			pro = pro*k;
			k++;
			cout<<pro<<endl;
		}
		k++;
		sum = sum+pro;
		cout<<sum<<endl;
	}
	
	//cout<<sum;
	return 0;
}