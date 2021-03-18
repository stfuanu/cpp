#include<iostream> 
using namespace std;  

class A // Outer Class
{
public:
	class B // Inner Class
	{
	public:
		static int a;
		void input()
		{
			cout<<"Similarly Function input() is called ."<<endl;
			cout<<"Insert a Number for variable (a) --> ";
			cin>>a;
			cout<<"Value of variable (a) inserted ."<<endl;
		}
		void show()
		{
			cout<<"Function show() is called & it's inside Class B which is inside Class A ."<<endl;
		}

	};
};
int A::B::a; 
int main()
{
	A::B obj;
	obj.show();
	obj.input();
	cout<<"\nAccessing Variable a (A::B::a) directly gives output --> "<<A::B::a<<endl;
}