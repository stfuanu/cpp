#include<iostream> 
using namespace std; 

int Array[15], size, pos, item, z; 

void input() 
{ 
	 cout << "\n Enter "<<size<<" array elements : ";
	for(int i = 0; i < size; i++) 
	{
		
		cin >> Array[i]; 
	}
} 


void output() 
{ 
	cout << "\n Array elements are : \n "; 
	for(int i = 0; i < size; i++) {
		cout << Array[i] << " " <<endl; 
	}
} 

void Delete()
{
	int ind;   
    cout<<"Enter index to be deleted : ";  
    cin>>ind;
    
    if(ind<0 || ind>=size)  
    {
        cout<<"Invalid\n";
    }
    else
    {
        for(int i=ind;i<=size-1;i++)
        {
            Array[i]=Array[i+1];
        }
        Array[size-1]={};
        output();
    }

}


void update() 
{ 
	cout << "\n Enter position of the elemen : ";  
	cin >> pos; 
	if(pos > 0 && pos <= size) 
	{ 
		cout << "\n Enter New value  : "; 
		cin >> item;
		Array[pos-1] = item; 
		output(); 
	} 
	else {
		cout << "\n Out of Range maybe ."; 
	}
} 



void search() 
{ 
	cout << "\n Enter the element to be searched: ";  cin >> item; 
	z = 1; 
	for(int i = 0; i < size; i++) 
	{ 
		if(Array[i] == item) 
		{ 
			z = 0; 
			pos = i; 
		} 
	} 

	if(z == 0) {
		cout << "\n " << item << " found at position " << pos+1<<endl;
	}
   	else {
   		cout << "\n " << item << " 404 : not found"<<endl ; 
   	}
}



int main() 
{ 
	int choice; 
	cout << "\n Enter array size : "; 
	cin >> size; 
	if(size > 0){
		input();
	} 
	else{
		cout << "\n Size should be greated than Zero !";
	} 


	cout << "\n Following actions can be performed : ";  cout << "\n 1. Update any element in the array . \n 2. Search for an element in the array . \n 3. Output the array . \n 4. Delete any element from the array ? ";  cout <<"\n Pick an action between (1-4): "; 
	cin >> choice; 
	switch(choice) 
	{
		case 1: update(); 
		break; 
		case 2: search(); 
		break; 
		case 3: output(); 
		break; 
		case 4: Delete();
		break;
		default: cout << "\n Wrong choice! "; 
		break; 
	} 
	return 0; 
} 

