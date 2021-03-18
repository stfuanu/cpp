#include <iostream>
using namespace std;

 int main()
{

for(int i=1;i<=12;i=i+2)
{
for(int j=14;j>=i;j--)
{
cout<<" ";
}
for(int k=1;k<=i;k++)
{
cout<<k<<" ";
}
cout<<endl;
}
return 0;
}
