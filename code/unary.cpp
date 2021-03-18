#include<iostream>
using namespace std;

class unary
{
        int a;
     public:
        void input()
        {
                cout<<"\n Enter a Number : ";
                cin>>a;
        }
        void operator++() 
        {
                a++;
        }
        void show()
        {
                cout<<"\nA : "<<a<<endl;
        }
};
int main()
{
        unary t1;
        t1.input();
        ++t1;
        cout<<"\n After Increment - unary operator : \n";
        t1.show();
}