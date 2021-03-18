#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"\nEnter 1st Number : ";
	cin>>a;
	cout<<"Enter 2nd Number : ";
	cin>>b;
	cout<<"Enter 3rd Number : ";
	cin>>c;

	if (a>=b && a>=c)
		cout<<"\nThe greatest Number is : "<<a<<endl;
	else if (b>=a && b>=c)
		cout<<"\nThe greatest Number is : "<<b<<endl;
	else
		cout<<"\nThe greatest Number is : "<<c<<endl;
}
