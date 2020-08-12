#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter Number of nos you want to add:- ";
	cin>>n;
	int s=0,t;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" No:-";
		cin>>t;
		s+=t;
	}
	
	cout<<"Total of all the number is: "<<s;
}
