#include<iostream>
using namespace std;
int fact(int n)
{
	int f=1;
	for( int i=1; i<=n; i++)
	{
		f=f*i;
	}
	cout<<f<<endl;
	return f;
}

int main()
{
	int n=5;
	int m = fact(n);
	
	while(m%10==0)
	{
		m=m/10;
	}
	
	cout<<m%10;
	return 0;
}