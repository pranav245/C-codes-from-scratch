#include<iostream>
using namespace std; 
  
// Driver Program to test above function 
int main() 
{ 
	int n;
	cin>>n;

	if (n <= 1) 
        cout<<"Not a prime Number\n"; 
  	int flag=1;
    for (int i = 2; i < n; i++) 
        {
			if (n % i == 0) 
            {
			flag=0;
			break; 
  	}}
    
	
	return 0; 
} 
