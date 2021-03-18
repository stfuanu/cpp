#include<iostream>
using namespace std;
 

 
int facto(int n)
{
    if(n > 1)
        return n * facto(n-1);
    else
        return 1;
}


int main()
{
    int n;
 
    cout << "\nEnter a Number : ";
    cin >> n;
 
    cout << "\nFactorial of "<< n << " is " << facto(n) <<endl;
 
    return 0;
}