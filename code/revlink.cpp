
#include <iostream>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct linkin {
    Node* head;
    linkin() { head = NULL; }
 

    void reverse()
    {

        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {

            next = current->next;

            current->next = prev;

            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " "<<endl;
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 

int main()
{
    linkin x;
    x.push(21);
    x.push(42);
    x.push(76);
    x.push(99);
 
    cout << "Given linked list\n";
    x.print();
 
    x.reverse();
 
    cout << "\nReversed Linked list \n";
    x.print();
    return 0;
}