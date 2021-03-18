#include<iostream> 
using namespace std; 
 
int x=100; // Global variable - Accessible by any function
//Not bounded inside any class .
 
int main() // Main Function
{
	int x; // Local variable - Only Main function can access it
 
	cout<<" Enter Local Number : ";
	cin>>x; 

	cout<< " Local Value of x is = "<< x <<endl;
	cout<< " Global Value of x is = "<< ::x <<endl;
}								// Scope Resolution Operator