#include<iostream>
using namespace std;

class A
{
public:
 	int x;
 	void first()
    {
 	    cout << "\nEnter First Number : "; 
 	    cin >> x;
    }
};
class B
{
 	public:
 	int x;
 	void second()
 	{
 	    cout << "\nEnter Second Number : "; 
 	    cin >> x;
 	}
};

class C : public A, public B // Multiple Inheritance 
{
 	public:
 		int z;
 	void sum()
 	{
 		z= A::x + B::x; // int x 
 	    cout<< "\nSum ---> " << z <<endl;
 	}
};

int main()
{
	C obj; // obj object is of class  C
	obj.first();
	obj.second();
	obj.sum();

	cout<<"\nLet's do it again but by Directly accessing the functions from their original class . \n"<<endl;

	obj.A::first();
	obj.B::second();
	obj.C::sum();

}
