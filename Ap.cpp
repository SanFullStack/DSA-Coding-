#include <iostream>
using namespace std;

int ap(int n)
{
	
	int answer= (3*n) + 7;
	cout<<answer<<endl;
	return answer;
	
}

int main()
{
	
	int n;
	cout<<"Enter the n-th term of the Arithmetic Progression"<<endl;
	cin>>n;	
	
	int ans = ap(n);
	return 0;
	
}