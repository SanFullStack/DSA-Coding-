#include <iostream>
using namespace std;

void findUniqueElement(int a[], int m)
{
	int i, key, j;
	int count=0;
	int Xor= 0;
	
	for ( i=0; i<m; i++)
	{
		Xor = Xor ^ a[i] ;
	}
	
	if ( Xor == 0 )
	{ 
	    cout << "No unique elemnts present in the array : " << endl;
	}
	
	else 
	{
		cout << Xor << endl;
	}
	
}

int main()
{
	int i,n;
	int arr[20];
	
	cout<<"Enter the no of elements of the array :"<<endl;
	cin>>n;
	
	for ( i=0; i<n; i++ )
	{
		cin>>arr[i];
	}
	
	cout << " The Unique elements present in the array are : "<< endl;
	findUniqueElement(arr,n);
	
	return 0;
}