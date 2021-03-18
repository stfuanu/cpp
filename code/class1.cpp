#include<iostream> 
using namespace std; 
inline void data() 
{ 
char name[40],address[200]; 
int age; 
float salary; 
cout<<"Enter Name : "; 
gets(name); 
cout<<"Enter Address : "; 
gets(address); 
cout<<"Enter age : "; 
cin>>age; 
cout<<"Enter salary : "; 
cin>>salary; 
cout<<"The data you entered is : "<<endl; 
cout<<"Name\t\tAddress\t\t\t\tAge\tSalary"<<endl; 
cout<<name<<"\t"<<address<<"\t"<<age<<"\t"<<salary; 
} 
int main() 
{ 
data(); 
return 0;
} 
