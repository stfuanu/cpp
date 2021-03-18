#include <iostream>

using namespace std;

int main()
{
	int arr[50], ins, i, p;
	cout<<"Enter array elements : \n";
	for(i=0; i<4; i++)
	{
		cin>>arr[i];
	}

	cout<<"\nEnter NEW element to be inserted in array : ";
	cin>>ins;
	cout<<"At which [INDEX] number : ";
	cin>>p;

	for(i=4; i>p; i=i-1)
	{
		arr[i]=arr[i-1];
	}
	arr[p]=ins;

	cout<<"\nNow the new array is : \n";
	for(i=0; i<4+1; i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<"\nNow REVERSE the Array : \n";
	for(i=4; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}