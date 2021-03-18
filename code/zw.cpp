#include<iostream> 
using namespace std; 

class test
{ 
	int next; 
public:
	
test(int range) 
{ 
	int num; 
	num =1;
	for(int i=1;i<=range;i++) 
		{ 
			num=num*i; 
		} 
		next=num; 
	} 


	void show() 
	{ 
		cout<<"Factorial is : "<<next<<endl; 
	} 
}; 


int main() 
{ 
int range; 
cout<<"Enter Number  :  "; 
cin>>range; 
test obj(range); 
obj.show(); 
return 0; 
}
