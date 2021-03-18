#include <iostream>
using namespace std; 

class infu
{ 
int a,b; 
public: 
inline void get() 
{ 
cout<< "Enter First Num : "; 
cin>>a;
cout<< "Enter Second Num : "; 
cin>>b;
} 
friend int add(infu ob) 
{ 
return(ob.a + ob.b);
} 
}; 
int main() 
{ 
infu obj; 
obj.get(); 
cout<< "\nAddition is  : "<< add(obj)<< endl; 
} 
