#include <iostream>

using namespace std;

class stac
{
int top, item;
int stack[25];
int n;
public:
	stac()
	{
		top=-1;
	}
void pop()
{
	if(top==-1)
		cout<<"Stack is empty";
	else if(top>=0)
{
	cout<<"Poping the element"<<stack[top];
	cout<<endl;
	item=stack[top];
	top=top-1;
}
}
void push()
{
	int  i;
	cout<<"Enter the size of stack=";
	cin>>n;
	for(i=0;i<n;i++)
		{
			cout<<"Enter the element"<<i+1<<"=";
			cin>>item;
			if(top<n-1)
				top=top+1;
			stack[top]=item;
		}
	}


void output()
{
	cout<<"Printing the stack::"<<endl;
	for(int j=0;j<=top;j++)
		cout<<stack[j]<<endl;
}
};

int main()
{
	stac s;
	s.push();
	s.output();
	s.pop();
	s.output();
	return 0;
}