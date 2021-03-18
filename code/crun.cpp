#include<iostream> 
using namespace std; 

inline void reco() 
{ 
	char name[37];
	char addr[98]; 

	int age; 
	float salary; 

	cout<<"Name : "; 
	gets(name);

	cout<<"Address : "; 
	gets(addr);

	cout<<"Age : "; 
	cin>>age; 
	cout<<"Salary : "; 
	cin>>salary; 

	cout<<"Displaying the record --------> \n"<<endl; 
	cout<<"Name is "<<name<<"\nAddress is "<<addr<<"\nAge is "<<age<<"\nSalary is"<<salary<<endl;  
}	 

int main() 
	{ 
		reco(); 
		return 0;
	} 


