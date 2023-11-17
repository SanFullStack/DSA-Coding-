#include<iostream>
using namespace std;

int main()
{
	int n,s=0;
	cout<<"Enter the number of terms:";
	cin>>n;
	cout<<"Sum of the numbers:";
	for ( int i=1; i<=n; i++)
	{
		s=s+i;
	}
	cout<<s;
}