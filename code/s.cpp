#include<iostream> 
using namespace std; 

class Time
{ 
	int hours,minutes,seconds; 


public: 
	void start() 
	{ 
		cout<<"Hours : "; 
		cin>>hours;
		cout<<"Minutes : "; 
		cin>>minutes; 
		cout<<"Seconds : "; 
		cin>>seconds; 
	}

	void add(Time ob1,Time ob2)
	{ 
		this->hours=ob1.hours+ob2.hours; 
		this->minutes=ob1.minutes+ob2.minutes; 
		this->seconds=ob1.seconds+ob2.seconds; 
	} 
	void show() 
	{ 
		cout<<"Time Now ---> "<<hours<<":"<<minutes<<":"<<seconds<<endl; 
	} 
}; 

int main() 
{ 
	Time t1,t2,t3; 
	cout<<"first---->"<<endl;
	t1.start(); 
	t1.show(); 
	cout<<"\nsecond---->"<<endl;
	t2.start(); 
	t2.show(); 
	t3.add(t1,t2); 
	cout<<"\nAfter Adding ------>"<<endl;
	t3.show(); 
}
