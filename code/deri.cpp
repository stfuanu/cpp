#include<iostream> 
using namespace std; 
class first  
{ char name[20]; 
 int bookno; 
 public: 
 void getdata() 
 { cout<<"\nEnter the name of book : "; 
 cin>>name; 
 cout<<"\nEnter Book No. : "; 
 cin>>bookno; 
 } 
 void putdata() 
 { cout<<"\nName of Book : "<<name; 
 cout<<"\nBookNo. :"<<bookno; 
 } 
}; 
class second 
{ char author[20],publisher[20]; 
 public: 
 void getdata() 
 { cout<<"\nEnter Author's Name : "; 
 cin>>author; 
 cout<<"\nEnterPublisher : ";
 cin>>publisher; 
 } 
 void showdata() 
 { cout<<"\nAuthor'sName : "<<author;  cout<<"\nPublisher : "<<publisher;   } 
}; 
class third: public first, public second { int no_pages, year; 
 public: 
 void get() 
 { first::getdata(); 
 second::getdata(); 
 cout<<"\nEnter No. of Pages : ";  cin>>no_pages; 
 cout<<"\nEnter the year of publication : ";  cin>>year; 
 } 
 void display() 
 { putdata(); 
 showdata(); 
 cout<<"\nNo. of Pages : "<<no_pages;  cout<<"\nYear of Publication : "<<year;  } 
}; 
int main() 
{ third book[5]; 
 int num; 
 cout<<"\nEnter the number of books : ";  cin>>num; 
 for(int i=0;i<num;i++) 
 { book[i].get();
 cout<<endl; 
 } 
 for(int i=0;i<num;i++) 
 { book[i].display(); 
 cout<<endl; 
 } 
 cout<<endl; 
 return 0; 
} 
