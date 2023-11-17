#include <iostream>
using namespace std;

int setBits(int n1)
{
	int count=0;
	
	while (n1!=0)
	{
		int bit = n1&1;
		if (bit == 1)
		{
			count ++;
		}
		n1 = n1>>1;
	}
	
	return n1;
	
}

int sum(int m, int n)
{
	
	int s1 = setBits(m);
	int s2 = setBits(n);
	
	int sum1 = s1 + s2;
	cout<<sum1<<endl;
	
	return sum1;
	
}

int main ()
{
	
	int a,b;
	cout<<"Enter the values of a & b "<<endl;
	cin>>a>>b;
	
	int s3 = sum(a,b);
	
	return 0;	
	
}