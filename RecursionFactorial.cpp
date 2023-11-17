#include<iostream>
using namespace std;
//RECURSION
//FACTORIAL
int factorial (int n)
{
	//BASE CASE IS MANDATORY FOR THE RECURSION TO STOP AND RETURNING A VALUE IS ALSO MANDATORY ( SEGMENTATION FAULT --> STACK MEMORY EXPLOSION
	if ( n==0 )
	{
		return 1;
	}
	
	//BREAKING UP OF ACTUAL RECUIRSION TO UNDERSTAND ITS WORKING
	/*int SmallerProblem = factorial(n-1); // Recursion
	int BiggerProblem = n * SmallerProblem;*/
	
	//ACTUAL RECURSION
	int BiggerProblem = n * factorial(n-1); // N*(N-1) IS THE RECURSIVE RELATION
	return BiggerProblem;	
}
int main ()
{
	int n;
	cin>>n;
	int ans = factorial(n);
	cout<<ans;
	return 0;
}