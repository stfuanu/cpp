#include<iostream>
using namespace std;


void output(int);

struct node
{
	int data;
	node *next;
};

node *start,*p;

void insertb()   
{
	int n;
	cout<<"Enter the limit of list";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		p=new node;
		if(p==NULL)
			cout<<"Memory not allocated";
		else 
		{
			int t;
			cout<<"Enter the elements"<<endl;
			cin>>t;
			p->data=t;
			if(start==NULL)
				p->next=NULL;
			else
				p->next=start;
			start=p;
		}
	}
	output(n);
}




void inserte()
{
	int item;
	cout<<"Enter the elements"<<endl;
	cin>>item;
	node *loc;
	p=new node;
	p->data=item;
	p->next=NULL;

	if(start==NULL)
		start=p;
	else
	{
		loc=start;
		while(loc->next!=NULL)
			loc=loc->next;
		loc->next=p;
	}
}

void output(int x)
{
	int j;
	p=start;
	for(j=0;j<x;j++)
	{
		cout<<"Linked List :"<<endl;
		cout<<p->data<<endl;
		p=p->next;
	}
}


int main()
{
	int a;

	cout<<"Enter 1 to enter value in beginning"<<endl;
	cout<<"Enter 2 for enter value at last"<<endl;
	cin>>a;

	if(a==1)
		insertb();
	if(a==2)
		insertb();

	return 0;
}