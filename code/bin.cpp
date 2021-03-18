#include<iostream> 
using namespace std; 
class A{ 
int x; 
public: 
void ini() 
{ 
cout<<"Enter a number : "; 
cin>>x; 
} 
A operator +(A ob) 
{ 
A obj; 
obj.x=x+ob.x+3; 
return obj; 
} 
void display()
{ 
cout<<"The number is : "<<x<<endl; 
} 
}; 
int main() 
{ 
A obj; 
A obj2; 
obj.ini(); 
obj2.ini(); 
A obj3=obj+obj2; 
obj3.display(); 
return 0; 
} 
