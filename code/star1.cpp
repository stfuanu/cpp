#include <iostream> 
using namespace std; 
int main()
{

for(int i=1;i<=14;i=i+2)
{
for(int j=14;j>=i;j--)
{
cout<<" ";
}
for(int k=1;k<=i;k++)
{
cout<<"* ";
}
cout<<endl;
}
for(int i=13;i>=1;i=i-2)
{
for(int j=14;j>=i;j--)
{
cout<<" ";
}
for(int k=1;k<=i;k++)
{
cout<<"* ";
}
cout<<endl;

}
return 0;
}
