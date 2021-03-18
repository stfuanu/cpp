//write a program to find largest element of an array
//write a program to add two matrix using multiD array .
// length of a string


#include <iostream>
using namespace std;

int main()
{
   int len, big;
   int num[9];
   cout<<"No. of elements : ";
   cin>>len;
  
   for(int x = 0; x < len; x=x+1)
   {
      cout<<"Enter Element "<< " ---> ";
      cin>>num[x];
   }

   big = num[0];

   for(int x = 1;x < len; x=x+1)
   {
      if( big < num[x] )

      	big = num[x];
   } 


   cout<<" largest is ------> "<<big<<endl;
}