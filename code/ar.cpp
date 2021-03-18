#include<iostream> 
using namespace std; 

void area(int base, int height) 
{ 
	float area1=(base*height)/2; 
	cout<<"Area of triangle : "<<area1<<endl; 
} 
void area(float radius) 
{ 
	float area=22/7*radius*radius; 
	cout<<"Area of circle : "<<area<<endl; 
} 

void area(float breadth, float length) 
{
	int area=length*breadth; 
	cout<<"The area of rectangle is : "<<area<<endl; 
} 


int main() 
{ 
	int base,height;
	float rad; 
	float b,l; 


	cout<<"AREA OF TRIANGLE------------>\n"; 
	cout<<"Base : "; 
	cin>>base; 
	cout<<"Height : "; 
	cin>>height; 
	area(base,height); 

	cout<<"\n\nAREA OF CIRLE------------->\n";
	cout<<"Radius : "; 
	cin>>rad; 
	area(rad); 


	cout<<"\n\nAREA OF RECTANGLE------------->\n";
	cout<<"Length : "; 
	cin>>l; 
	cout<<"Breadth : "; 
	cin>>b; 
	area(b,l); 

}

