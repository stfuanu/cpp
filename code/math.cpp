#include<iostream> 
#include<math.h> 
using namespace std; 

double defpow(double m,int sq) 
{ 
	double def; 
	def=pow(m,sq); 
	return def;
} 

int main() 
{ 
	double num,result; 
	int powi; 
	int choice;
	cout<<"Number : "; 
	cin>>num; 
	cout<<"Power : "; 
	cin>>powi; 

	cout<<"Enter 1 for Default(square) & Enter 2 for Custom Power : ";
	cin>>choice;

	if(choice==1){
		cout<<"Default power (2) of Number "<<num<<" is "<<defpow(num,2)<<endl;
	}else if(choice==2){
		double result = pow(num,powi);
		cout<<"Number "<<num<<" to power "<<powi<<" is "<<result<<endl;
	}
} 

