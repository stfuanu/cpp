#include<iostream> 
#include<string.h>  
using namespace std;  
  
char maxfrq(char* str)  
{ 
	int count[45] = {0};  
	int len = strlen(str);  
 	int max = 0;  
 	char ans;  
  
 	for (int i = 0; i < len; i++) 
 	{ 
 		count[str[i]]++;  
 		if (max < count[str[i]]) 
 			{ 
 				max = count[str[i]];  
 				ans = str[i];  
 			}  
 	}  
 	return ans;  
}  


int main() 
{ 
	char str[] = "This is string"; 
 
 	cout<<"String is : "; 
 	for(int i=0;i<strlen(str);i++) {
 		cout<<str[i]<<endl;
 	}
 	
 	cout << "Charater with Max Freq is : "<< maxfrq(str)<<endl;  
}
