#include<iostream>
using namespace std;

int main()
{
	int array[10],i;
	cout<<"Enter the array:"<<endl;


	for(i=1;i<=5;i++){
		cin>>array[i];
	}
	cout<<"The Array is : \n"<<endl;

	for(i=1;i<=5;i++){
		cout<<array[i]<<endl;
	}

	int c;
	cout<<"Enter the Index position of the Element to be Deleted : ";
	cin>>c;

	for(int j=c;j<=5;j++){
		array[j]=array[j+1];
	}

	cout<<"Array after deletion : \n"<<endl;
	for(i=1;i<=5;i++){
		cout<<array[i]<<" ";
	}
}
