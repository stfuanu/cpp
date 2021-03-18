#include <iostream> 
#include <string.h>
using namespace std; 

int main(){
	string x;
	cout<<"Type the word 'samosa' in capital letter : ";
	cin>>x;

	try {
		if (x == "SAMOSA"){
			cout<<"\nOKAY , it works . You know what are capital letters "<<endl;
		}else{
			throw x;
		}
	}
		catch(string something){
			cout<<"Wrong , Catch message executed "<<endl;
		}
}


