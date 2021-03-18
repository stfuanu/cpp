#include<iostream>

using namespace std;
int main()
{
	
	float i,c,fact;
	fact=1;

	cout<<"Enter a Number : ";
	cin>>c;

	if(c==0)
		cout<<"Factorial of 0 is 1 "<<endl;
	else if(c<0)
		cout<<"Factorial does not exist for -ve numbers"<<endl;
	else
	{
		for(i=1;i<=c;i=i+1)
			fact=fact*i;
		cout<<"Factorial is "<<fact<<endl;
	}

}
