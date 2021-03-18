#include <iostream>
using namespace std;

int fibo(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibo(x-1)+fibo(x-2));
   }
}

int main() {
   int x , i=0;
   cout << "Enter No. of Terms : ";
   cin >> x;
   cout << "\nFibonnaci Series : "<<endl;
   while(i < x) {
      cout << fibo(i)<<endl;
      i++;
   }
   return 0;
}