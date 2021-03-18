#include<iostream> 
using namespace std; 

int main()
{
	{
		int a = 1 ; // Same Variable
		cout<<"Inner Block : "<<a<<endl;
	}

	int a = 99 ;
	cout<<"Outer Block : "<<a<<endl;
}