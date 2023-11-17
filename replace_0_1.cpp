#include<iostream>
using namespace std;
void replace( int n )
{
	/*int digit=0;
	while(n!=0)
	{
		int rem = n%10;
		if ( rem==0 )
		{
			rem =1;
		}
		digit = digit*10 + rem;
		n=n/10; 
	}
	
	int m=0;	
	while(digit!=0)
	{
		int rem = digit%10;
		m = m*10 + rem;
		digit=digit/10; 
	}
	
	cout<<m;*/
	
	int arr[100];
	int i=0;
    while(n!=0)
    {
    	int rem = n%10;
    	if (rem==0)
    	{
    		rem=1;
		}
    	arr[i]=rem;
    	n=n/10;
    	i++;
	}
	
	for( int j=i-1; j>=0; j-- )
	{
		cout<<arr[j];
	}
}

int main()
{
	int n;
	cin>>n;
	replace(n);
	return 0;
}