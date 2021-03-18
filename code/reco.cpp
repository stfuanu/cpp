#include<iostream>
using namespace std; 
class Student{ 
char name[40], branch[6],sex; 
int rollno,age,marks[5]; 
public: 
void initial() 
{ 
cout<<"Enter name : "; 
cin>>this->name; 
cout<<"Enter branch : "; 
cin>>this->branch; 
cout<<"Enter sex M/F : "; 
cin>>this->sex; 
cout<<"Enter rollno : "; 
cin>>this->rollno; 
cout<<"Enter age : "; 
cin>>this->age; 
for(int i=0;i<5;i++) 
{ 
cout<<"Enter marks of Subject "<<i+1<<" out of 100 : "; 
cin>>this->marks[i]; 
} 
} 
void per() 
{ 
float res=0; 
for(int i=0;i<5;i++)
{ 
res=res+this->marks[i]; 
} 
if(res/5>70) 
{ 
cout<<this->name<<"\t\t"<<(res/5)<<endl; 
} 
} 
}; 
int main() 
{ 
Student arr[3]; 
for(int i=0;i<3;i++) 
{ 
arr[i].initial(); 
} 
cout<<"Now displaying name and percentage of student whos overall percentage is  above 70% : "<<endl; 
cout<<"Name\t\tPercentage"<<endl; 
for(int i=0;i<3;i++) 
{ 
arr[i].per(); 
} 
return 0; 
}
