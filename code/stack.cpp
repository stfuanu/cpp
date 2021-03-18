#include<iostream>
using namespace std;

class stook
{
public:
	int top , item , n , stack[50];

	stook()
	{
		top=-1;
	}


	void push()
	{
		int i;
		cout<<"Enter the size of the stack : "; // 7
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"Enter the element : "<<i+1<<" : ";
			cin>>item;
			if(top<n-1)
				top=top+1;
			stack[top]=item;
		}
	}


	void pop()
	{
		int opt;
		cout<<"Input the Options : ";
		cin>>opt;
		if (opt == 1)
		{
			cout<<"[ Option 1 ] : Pop Last Element in a Stack \n"<<endl;

			if(top==-1)
				cout<<"Stack is Empty";
			else if(top>=0)
			{
				cout<<"Popping.... [ Element "<<stack[top]<<" at Index "<<top<<" ]"<<endl;
				item=stack[top];
				top=top-1;
			}
		}
		else if(opt == 2)
		{
			cout<<"[ Option 2 ] : Pop First Element in a Stack \n"<<endl;

			if(top==-1)
				cout<<"Slack is Empty";
			else if( top >=0 )
			{
				cout<<"Popping.... [ Element "<<stack[0]<<" at Index "<<0<<" ]"<<endl;
				item=stack[0];
				top=top-1;

				cout<< "\n--> Now the Stack is : "<<endl;
				for(int j=0;j<=top+1;j++)
					cout<<stack[j]<<endl;
			}
		}
	}

	void output()
	{
		cout<< "--> Now the Stack is : "<<endl;
		for(int j=0;j<=top;j++)
			cout<<stack[j]<<endl;
	}

};

int main()
{
	stook k;
	k.push();
	k.output();
	cout<<"Type [1] Pop Last Element in a Stack \n"<<endl;
	cout<<"Type [2] Pop First Element in a Stack \n"<<endl;
	k.pop();
	k.output();
	return 0;

}

