#include<iostream> 
using namespace std; 
int main() 
{
int *a,*b,*temp;
cout<<"Enter value of a and b : "; 
cin>>*a>>*b;
cout<<"Before swap a="<<*a<<" b="<<*b<<endl;
 temp=a;
a=b; b=temp;
cout<<"\nAfter swapingna="<<*a<<"\nb="<<*b;

}
