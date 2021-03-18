#include<iostream>
using namespace std; 
struct Queue 
{ 
 int arr[5]; 
 int front,rear; 
}; 
void enqueue(struct Queue *p,int x) { 
 if(p->front==(p->rear+1)%5)  { 
 printf("Queue is overflow\n");  return ; 
 } 
 else 
 { 
 p->rear=(p->rear+1)%5;  p->arr[p->rear]=x; 
 } 
 if(p->front==-1) 
 p->front=0; 
} 
int dequeue(struct Queue *p) 
{ 
 int x; 
 if(p->front ==-1)
 { 
 printf("Queue is underflow\n");  return -1; 
 } 
 else 
 x=p->arr[p->front]; 
 if(p->front==p->rear) 
 { 
 p->front=-1; 
 p->rear=-1; 
 } 
 else 
 { 
 p->front=(p->front+1)%5;  } 
 return x; 
} 
void display(Queue q) 
{ 
 if (q.front == -1)  
 {  
 printf("\nQueue is Empty");   return;  
 }  
 printf("\nElements in Circular Queue are: ");   if (q.rear >= q.front) 
 {  
 for (int i = q.front; i <= q.rear; i++)   printf("%d ",q.arr[i]);  
 }  
 else 
 {  
 for (int i = q.front; i < 5; i++)   printf("%d ", q.arr[i]);   for (int i = 0; i <= q.rear; i++)  
 printf("%d ", q.arr[i]);   }  
} 
int main() 
{ 
Queue q; 
q.front=q.rear=-1; 
enqueue(&q,10); 
enqueue(&q,20); 
enqueue(&q,30); 
enqueue(&q,40); 
enqueue(&q,50); 
display(q); 
cout<<endl; 
cout<<dequeue(&q)<<" "; 
display(q); 
enqueue(&q,60);
display(q); 
return 0; 
} 
