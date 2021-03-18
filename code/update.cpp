#include<iostream>
using namespace std;
int main()
{
	int x,i;
	int a[5];
	cout<<"Enter the elements in array"<<endl;


	for(i=0;i<5;i++)
		cin>>a[i];
	cout<<"Array : "<<endl;
	for(i=0;i<5;i++)
		cout<<a[i]<<endl;
	cout<<"Enter the position to  delete : "<<endl;
	cin>>x;
	for(i=x;i<5;i++)
		a[i]=a[i+1];
	cout<<"Array after deletion ---> "<<endl;

	for(i=0;i<5;i++)
		cout<<a[i]<<endl;

	return 0;

}