#include <iostream>
using namespace std;

class basic_info
{
public:
	char name[30];
	int roll;
	char sex;


	void getdata(){
		cout<<"Name : ";
		cin>>name;
		cout<<"Roll No. :";
		cin>>roll;
		cout<<"Sex :";
		cin>>sex;
	}

	void display(){
		cout<<"Name is "<<name<<endl;
		cout<<" Roll No. is "<<roll<<endl;
		cout<<" Sex is "<<sex<<endl;
	}
};

class physical_fit : public basic_info
{
public:
	int height;
	int weight;

	void display(){
		cout<<" Height is  "<<height;
		cout<<" Weight is  "<<weight;
	}

	void getdata(){
		cout<<"\n Enter Your  height: ";
		cin>>height;
		cout<<"Enter Your weight: ";
		cin>>weight;
	}


};

int main(){

	physical_fit derii1;

	derii1.basic_info::getdata();
	derii1.physical_fit::getdata();
	derii1.basic_info::display();
	derii1.physical_fit::display();
}
