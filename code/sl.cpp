#include <iostream> 
using namespace std; 
class LinkedList
{ 
 int val; 
 LinkedList *next; 
public: 
 LinkedList() 
 { 
 this->val=0; 
 this->next=NULL; 
 } 
 LinkedList (int val, LinkedList * next)  { 
 this->val = val; 
 this->next = next; 
 } 
 LinkedList (int val) 
 { 
 this->val = val; 
 this->next = NULL; } 
 void setNext(LinkedList *next)  { 
 this->next=next; 
 } 
 void setVal(int val) 
 { 
 this->val=val;
 } 
 LinkedList* getNext() 
 { 
 return this->next; 
 } 
 int getVal() 
 { 
 return this->val; 
 } 
bool checkNull() 
 { 
 return (this->next==NULL); 
 } 
 void insert (LinkedList ** start, int val) 
 { 
 LinkedList *p = *start, *prev = NULL, *temp = new LinkedList (val);  if (p == NULL) 
 { 
*start = temp; 
return; 
 } 
 while (p->next != NULL) 
 { 
p = p->next; 
 } 
 p->next = temp;
 } 
 void deletes (LinkedList ** start, int val)  { 
 LinkedList *p = *start, *prev = NULL;  if (start == NULL) 
 { 
cout << "List is empty!"; 
return; 
 } 
 if (p->val == val) 
 { 
*start = p->next; 
delete (p); 
return; 
 } 
 while (p != NULL) 
 { 
if (p->val == val) 
 { 
 prev->next = p->next;  delete (p); 
 return; 
 } 
prev = p; 
p = p->next; 
 }
 cout << "Sorry! Data not found.";  } 
 void display (LinkedList * start)  { 
 if (start == NULL) 
 { 
cout << "List is empty!"; 
return; 
 } 
 while (start != NULL) 
 { 
cout << start->val << " "; 
start = start->next; 
 } 
 cout << endl; 
 } 
}; 
class Stack 
{ 
 LinkedList *start; 
 public: 
 Stack() 
 { 
 start=NULL; 
 } 
 void push(int val)
 { 
 start->insert(&start,val); 
 } 
 void pop() 
 { 
 LinkedList *p=start,*prev=NULL;  LinkedList **newStart=&start;  if(p==NULL) 
 { 
 cout<<"Stack Underflowed!";  return; 
 } 
 p->deletes(&start,this->top());  } 
 int top() 
 { 
 LinkedList *p=start; 
 while(!(p->checkNull()))  { 
 p=p->getNext();  } 
 return p->getVal(); 
 } 
}; 
int main () 
{
Stack s; 
 s.push(10); 
 cout<<"\n 10 Pushed ";
 s.push(20); 
 cout<<"\n 20 Pushed ";
 s.push(30); 
 cout<<"\n 30 Pushed \n";
 cout<<s.top(); 
 s.pop(); 
 cout<<endl<<s.top();  s.pop(); 
 cout<<endl<<s.top();  s.pop(); 
 return 0; 
}