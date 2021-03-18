#include<iostream> 
using namespace std; 
class Cons 
{ int real,imag; 
 public: 
 Cons()  
 { 
 } 
 Cons(int r)  
 { real=r; 
 imag=r; 
 } 
 Cons(int r,int i)  
 { real=r; 
 imag=i; 
 } 
 void print() 
 { cout<<"\n The sum of two complex numbers is  "<<real<<"+"<<imag<<".i"<<endl; 
 } 
 friend void sum(Complex,Complex); 
}; 
void sum(Cons obj1,Cons obj2)
{ Complex obj3; 
 obj3.real=obj1.real+obj2.real; 
 obj3.imag=obj1.imag+obj2.imag; 
 obj3.print(); 
} 
int main() 
{ int a,b,c; 
 Complex c1;  
 cout<<"For equal values :\n"; 
 cout<<"Enter the equal value of real and imaginary part of number  1:\n"; 
 cin>>a; 
  
 Complex c2(a);  
 cout<<"\nFor different values : \n"; 
 cout<<"Enter the real and imaginary part of number 2:\n";  
 cin>>b>>c; 
 Complex c3(b,c);  
 sum(c2,c3);  
 return 0; 
}
