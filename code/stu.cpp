#include<iostream> 
using namespace std; 

class STUDENT{ 

public: 
	int rollno; 
	char name[73];
	void dump() 
	{ 
		cout<<"Name of Student -------> "; 
		cin>>name;
		cout<<"Enroll No. -------> "; 
		cin>>rollno; 
	} 
}; 


class EXAM:public STUDENT
{ 

public: 
	int marks[12]; 
void dump2() 
{ 
	for(int i=0;i<3;i++) 
	{ 
		cout<<"Marks for Subject code --->  CS30"<<i+1<<" : "; 
		cin>>marks[i]; 
	} 
} 
}; 


class RESULT:public EXAM
{ 

public: 
	int totalmarks =0;
	void dump3()
	{ 
		for(int i=0;i<3;i++) 
		{ 
			totalmarks=totalmarks+marks[i]; 
		} 
	} 
	void show() 
	{ 
		cout<<"Name is --->"<<name<<endl;
		cout<<"Roll Number is ---> "<<rollno<<endl;
		cout<<"Total Marks ----> "<<totalmarks<<" Out of 300"<<endl; 
	} 
}; 


int main() 
{ 
RESULT test; 
test.dump(); 
test.dump2(); 
test.dump3(); 
cout<<"\n";
test.show(); 
}
