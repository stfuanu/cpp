#include<iostream> 
using namespace std; 
 
class A // Class 
{ 
	float p , r , t , si ;

public:
    void input(); // Function  declared
    void output(); // Function  declared
}; 
 
void A::input() //Scope Resolution Operator
{
	cout<<"Principle [Rs.] : ";
	cin>>p;

	cout<<"Rate [%] : ";
	cin>>r;

	cout<<"Time [Years] : ";
	cin>>t;
}
void A::output() // Defining the function output() outside Class si . 
{  
	si = (p*r*t)/100 ;

    cout<<"\nSimple Interest annually  in Rs. is : "<<si<<endl; 
} 


int main() 
{ 
    A object;
    object.input();
    object.output();
}