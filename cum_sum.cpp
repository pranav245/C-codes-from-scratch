#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter array size:- ";
	cin>>n;
	
	int arr[n],cum_arr[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		cum_arr[i]=sum;
	}
	
	cout<<"###  Cum Array  ###\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<cum_arr[i]<<"  ";
	}
	
}
