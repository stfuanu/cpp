#include<iostream> 
using namespace std; 
int main()
{
int m1[3][3],m2[3][3],m3[3][3],sum=0,i,j,k;
cout<<"Enter first matrix elementds:\n"; 
for(i=0;i<3;i++)
{
for(i=0;j<3;j++)
{
cout<<" "; cin>>m1[i][j];
}
}
cout<<"Enter second matrix elements:\n"; 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "; cin>>m2[i][j];
}
}
cout<<"\n\n Multiplication of two matrices:\n"; 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=0; 
for(k=0;k<3;k++)

{
sum=sum+m1[i][k]*m2[k][j];
}
m3[i][j]=sum;
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "; cout<<m3[i][j]<<"\t";
}
cout<<"\n";
}
return 0;
}
