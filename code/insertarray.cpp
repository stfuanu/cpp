#include <iostream>

using namespace std;

int main()
{
	int arr[40], s, i, p;
	cout<<"Enter array elements : \n";
	for(i=0; i<4; i++)
	{
		cin>>arr[i];
	}

	cout<<"\nEnter NEW element to be inserted in array : ";
	cin>>s;
	cout<<"At which [INDEX] number : ";
	cin>>p;

	for(i=4; i>p; i=i-1)
	{
		arr[i]=arr[i-1];
	}
	arr[p]=s;

	cout<<"\nNow the new array is : \n";
	for(i=0; i<4+1; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}