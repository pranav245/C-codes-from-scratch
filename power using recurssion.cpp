#include<bits/stdc++.h> 
using namespace std;

int power(int n,int p)
{
	if(n==0) return 0;
	if(p==0) return 1;
	
	int res = power(n,p/2);
	res= res*res;
	
	if(p%2==1) res=n*res;
	
	return res;
}


int main(){
	int n,p;
	cout<<"Number:-";
	cin>>n;
	cout<<"Power:-";
	cin>>p;
	cout<<power(n,p);
	}
 
