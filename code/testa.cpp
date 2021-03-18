#include <iostream>
using namespace std; 

class infu
{ 
int x,y; 
public: 
inline void run() 
{ 
cout<< "Enter First Num : "; 
cin>>x;
cout<< "Enter Second Num : "; 
cin>>y;
} 
friend int add(infu ob) 
{ 
return(ob.x + ob.y);
} 
}; 
int main() 
{ 
infu t1; 
t1.run(); 
cout<< "\nAddition is  : "<< add(t1)<< endl; 
} 
