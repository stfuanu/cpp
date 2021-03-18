#include<iostream>
using namespace std;

inline void pro()
{
	char name[40];
	char addr[57];

	int age;

	float salary;
	cout<<"Name : ";
	cin>>name;
	cout<<"Address : ";
	cin>>addr;
	cout<<"Age : ";
	cin>>age;
	cout<<"salary : ";
	cin>>salary;

	cout<<"Information is ------->\n"<<endl;
	cout<<"Name is "<<name<<endl;
	cout<<"Address is "<<addr<<endl;
	cout<<"Age is "<<age<<endl;
	cout<<"Salary is "<<salary<<endl;

}


int main()
{
	pro();
}