#include<iostream> 
using namespace std; 
struct Queue 
{ 
int a; 
Queue *p; 
}; 
Queue *g, *rear, *start; 
int deletes() 
{ 
 int x;
if(start==NULL) 
{ 
cout<<"Underflow"; 
return -1; 
} 
else 
{ 
g=start; 
x=g->a; 
start=g->p; 
delete g; 
cout<<"Element  deleted \n\n";
} 
return x; 
} 
void insert(int k) 
{ 
g= new Queue; 
g->a=k; 
if(g==NULL) 
{ 
cout<<"overflow"<<endl; 
} 
else 
{ 
g->p=NULL; 
 if(start==NULL)
 { 
 start=g; 
 } 
 else 
 { 
 rear=start; 
 while(rear->p!=NULL) 
 { 
 rear=rear->p; 
 } 
 rear->p=g; 
 } 
} 
cout<<"element inserted"<<endl; } 
int main() 
{ 
 insert(10); 
 insert(20); 
 cout<<deletes()<<endl; 
 insert(30); 
 insert(40); 
 cout<<deletes()<<endl; 
 insert(50); 
 cout<<deletes()<<endl;
 return 0; 
} 
