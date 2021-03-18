#include<iostream>
using namespace std;

int main()
{
	int n,num,d,rev=0;
	cout<<"Enter the number : ";
	cin>>n;
	num=n;


	while(n!=0){
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}

	cout<<"Reverse of the number is : "<<rev<<endl;

	if(num==rev){
		cout<<"The number is palindrome:";
	}
	else{
		cout<<"The number is not palindrome:";
	}
}
