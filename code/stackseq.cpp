#include<iostream>
using namespace std;

class stac
{
private:
	int stack[100],top,item;
public:
	stac()
	{
		top=-1;
	}

	void push(int a){
	if(top==100)
		cout<<"Stack Overflow";
	else{
			top=top+1;
			stack[top]=a;
		}
	}

	void pop()
	{
		if(top==-1)
			cout<<"Stack is empty";
		else{
			cout<<"Poping the value : "<<stack[top];
			cout<<endl;
			item=stack[top];
			top=top-1;
		}
	}

	void output()
	{
		cout<<"Stack is : "<<endl;
		for(int i=0;i<=top;i++)
			cout<<stack[i]<<endl;
	}
};


int main()
{
	stac z;
	z.push(1);
	z.push(2);
	z.pop();
	z.push(1);
	z.push(2);
	z.pop();
	z.pop();
	z.pop();
	z.push(2);
	z.pop();
}
