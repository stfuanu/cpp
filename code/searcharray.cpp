#include<iostream>
using namespace std;

int main()
{
	int array[10],i,size;
	cout<<"[+] Enter size of the array : ";
	cin>>size;

	cout<<"[+] Enter "<<size<<" elements in the array : "<<endl;
	for(i=0;i<size;i++){
		cin>>array[i];
	}

	cout<<"[+] The array is : "<<endl;
	for(i=0;i<size;i++){
		cout<<array[i]<<endl;
	}

	int c,a;
	cout<<"Enter the element to be searched : ";
	cin>>c;

	for(int j=0;j<size;j++){
		if(array[j]==c){
			cout<<"[+] Element "<<c<<" is found at position : "<<j+1<<" at index [ "<<j<<" ] ."<<endl;
			a=2;
		}
	}
	if(a!=2){
		cout<<"[-] Element Not Found !";
		}
}
