#include<iostream> 
using namespace std; 
int main() 
{ 
int rows1,columns1; 
cout<<"FIRST MATRIX -------->\n"; 
cout<<"No. of Rows : "; 
cin>>rows1; 
cout<<"No. of Columns : "; 
cin>>columns1; 
int** mat1=new int*[rows1]; 
for(int i=0;i<rows1;i++) 
{ 
mat1[i]=new int[columns1]; 
} 
cout<<"Enter the values of matrix 1 ---->"<<endl;
for(int i=0;i<rows1;i++) 
{ 
for(int j=0;j<columns1;j++) 
{ 
cout<<"Value of Row No. "<<i+1<<" and Column No.  "<<j+1<<" : "; 
cin>>mat1[i][j]; 
} 
} 
int rows2,col2; 
cout<<"SECOND MATRIX -------->\n";
cout<<"No. of Rows : "; 
cin>>rows2; 
cout<<"No. of Columns : "; 
cin>>col2; 
int** mat2=new int*[rows2]; 
for(int i=0;i<rows2;i++) 
{ 
mat2[i]=new int[col2]; 
} 
cout<<"Enter the values of matrix 2 ---->"<<endl;
for(int i=0;i<rows2;i++) 
{ 
for(int j=0;j<col2;j++) 
{ 
cout<<"Value of Row No. "<<i+1<<" and Column No.  "<<j+1<<" : "; 
cin>>mat2[i][j];
} 
} 
if(columns1!=rows2) 
{ 
cout<<"Error cant multiply."; 
} 
else 
{ 
cout<<"After Multiplying ---------->"<<endl; int res=0; 
int** mat3=new int*[rows1]; 
for(int i=0;i<rows1;i++) 
{ 
mat3[i]=new int[col2]; 
} 
for(int i=0;i<rows1;i++) 
{ 
for(int j=0;j<col2;j++) 
{ 
res=0; 
for(int k=0;k<rows2;k++) 
{ 
res=res+(mat1[i][k]*mat2[k][j]); 
} 
mat3[i][j]=res; 
} 
}
for(int i=0;i<rows1;i++) 
{ 
for(int j=0;j<col2;j++) 
{ 
cout<<mat3[i][j]<<" "; 
} 
cout<<endl; 
} 
} 
} 
