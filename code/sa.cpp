#include<iostream>
using namespace std; 

class Copyf 
{ 
	int i,j,fibbo; 
public: 
	Copyf() 
	{ 
		i=0; 
		j=1; 
		fibbo=i+j; 
	} 
	void add()
	{ 
		i=j; 
		j=fibbo; 
		fibbo=i+j; 
	} 

	Copyf (Copyf &x) { 
		i=x.i; 
		j=x.j; 
		fibbo=x.fibbo; 
	} 
	void show(){
		cout <<fibbo<<endl; 
	}
};


int main () 
	{ 
	Copyf t1; 
	int num;
	cout<<"Enter range : ";
	cin>>num;
	cout<<"\n";
	for (int i=0; i<num ;i=i+1) 
	{ 

		t1.show();
		t1.add(); 
	} 
} 
