#include <iostream>
using namespace std;
int main()
{
	int size;
    int arr[20] = {}; 
    cout<<"Enter Size of the array :\n"; 
    cin>>size;
    
    cout<<"Enter "<<size<<" elements\n";   

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int ind;   
    cout<<"Enter index to be deleted\n";  
    cin>>ind;
    
    if(ind<0 || ind>=size)  
    {
        cout<<"Invalid\n";
    }
    else
    {
        for(int i=ind;i<=size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[size-1]={};
    }
    
    cout<<"Array is :\n";  
    for(int i=0;i<5;i++)
    {
        if(arr[i]!='\0')
            cout<<arr[i]<<" ";
    }
}