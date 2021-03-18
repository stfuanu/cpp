#include<iostream>  
using namespace std; 

class Deque  
{  
	int array[17];  
	int front;  	
	int rear;  
	int size;

	public :  
	Deque(int size)  
	{  
		front = -1;  
		rear = 0;  
		this->size = size;  
	}  


	void insertfront(int key);  
	void insertrear(int key);  
	void deletefront();  
	void deleterear();  
	int getFront();  
	int getRear();  
	bool isFull()
	{ 
		return ((front == 0 && rear == size-1) || front == rear+1);   
	}  
	
	bool isEmpty() 
	{ 
		return (front == -1);  
	} 
};  


void Deque::insertfront(int key)  
{  
	if (isFull())  
	{  
		cout<<"Overflow!!\n"<<endl;  
		return;  
	}  
	if (front == -1)  
	{  
		front = 0;  
		rear = 0;  
	}  
	else if (front == 0) 
		front = size - 1 ;  
	else  
		front = front-1;  
	array[front] = key ; 
} 


void Deque::insertrear(int key)  
{  
 if (isFull())  
 {  
 cout<<" Overflow!!\n "<<endl;   return;  
 }  
 if (front == -1)  
 {  
 front = 0;  
 rear = 0;  
 }  
 else if (rear == size-1) 
 rear = 0;  
 else  
 rear = rear+1;  
 array[rear] = key; 
}  


void Deque ::deletefront()  
{  
 if (isEmpty())  
 {  
 cout<<"Queue Underflow!!\n"<<endl;   return ;  
 }  
 if (front == rear) 
 {  
 front = -1;  
 rear = -1;  
 }  
 else  
 if (front == size -1)  
 front = 0;  
 else  
 front = front+1;  
}  


void Deque::deleterear()  
{  
	if (isEmpty())  
	{  
		cout<<" Underflow!!\n"<<endl ;   
		return ;  
	}  
	if (front == rear)  
	{  
		front = -1;  
		rear = -1;  
	}  
	else if (rear == 0) { 
		rear = size-1;  
	}
	else {
		rear = rear-1; 
	}
}  


int Deque::getFront()  
{  
	if (isEmpty())  
	{  
		cout<<" Underflow!!\n"<<endl;   
		return -1 ;  
	}  
	return array[front];  
} 


int Deque::getRear()  
{  
	if(isEmpty() || rear < 0)  
	{  
		cout<<" Underflow!!\n"<<endl;   
		return -1 ;  
	}  
	return array[rear];  
}  
  


int main()  
{  
 Deque dq(5);  
 cout<<"Inserting 10 at rear end \n";   
 dq.insertrear(10);  

 cout<<"Inserting 30 at rear end \n"; 
 dq.insertrear(30);  
  
 cout<<"rear element of deque "<<dq.getRear()<<endl;    
 dq.deleterear();  

 cout<<"After deleting rear, rear = "<<dq.getRear()<<endl;    
 cout<<"inserting 50 at front end \n";  
 dq.insertfront(50);  
  
 cout<<"front element of deque "<<dq.getFront()<<endl;    
 dq.deletefront();  
  
 cout<<"After deleting front, front = "<<dq.getFront()<<endl;   
 return 0;  
} 