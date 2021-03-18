#include<iostream> 
using namespace std; 

class test  
{ 
	int num1,num2,num3; 
 	public: 
 	void input()  
 	{ 
 		cout<<"Enter 1st number --->"; 
 		cin>>num1;
 		cout<<"Enter 2nd number --->"; 
 		cin>>num2;
 		cout<<"Enter 3rd number --->"; 
 		cin>>num3;
 	} 
 	friend void big(test ff); 
}; 

void big(test ff) 
{ 
	if(ff.num1 > ff.num2 && ff.num1 > ff.num2)  { 
			cout<<"Largest is : "<<ff.num1; 
		} 
	else if(ff.num2 > ff.num3) { 
			cout<<"Largest is : "<<ff.num2; 
		} 
	else { 
		cout<<"Largest is : "<<ff.num3; 
	} 
} 

int main() 
{ 
	test testobject; 
	testobject.input();
	big(testobject); 
	cout<<"\n"; 
} 
