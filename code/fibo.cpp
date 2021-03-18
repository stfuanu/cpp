#include <iostream>
using namespace std;

int main()
{
    int num, x = 0, y = 1, next;

    cout<<"\nEnter the number of terms : ";
    cin>>num;

    cout<<"\nFibonacci Series is : "<<endl;
    cout<<"\n";
    cout<<x<<endl;
    cout<<y<<endl;

    for (int i = 2; i <= num; i=i+1)
    {
        next = x + y;
        cout<<next<<endl;
        x = y;
        y = next;
    }
    return 0;
}
