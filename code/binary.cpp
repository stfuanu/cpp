#include<iostream> 
using namespace std; 
class test{ 
    int x; 
public: 
    void start() 
    { 
        cin>>x; 
    } 

    test operator +(test ob) { 
        test obj; 
        obj.x=x+ob.x; 
        return obj; 
    } 


void show()
{ 
    cout<<"Addition after binary operator overloading : "<<x<<endl; 
} 
};

int main() 
{ 
    test t1 , t2;
    cout<<"Enter two numbers  : "; 
    t1.start(); 
    t2.start(); 
    test t3=t1+t2; 
    t3.show(); 
} 
