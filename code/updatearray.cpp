
#include<iostream> 
using namespace std; 

int Array[15], size, pos, item, z; 

void input() 
{ 
	cout << "\n Enter array elements : ";
	for(int i = 0; i < size; i++) 	
	{
		cin >> Array[i]; 
	}
} 


void output() 
{ 
	cout << "\n Updated Array elements are : \n "; 
	for(int i = 0; i < size; i++) {
		cout << Array[i] <<endl; 
	}
} 


void update() 
{ 
	cout << "\n Enter position of the element to be updated : ";  
	cin >> pos; 
	if(pos >= 0 && pos <= size) 
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

	update();

}