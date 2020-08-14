#include<bits/stdc++.h>

using namespace std;


void bubbleSort(vector<int> v)
{
	int n=v.size();
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(v[j]>v[v[j+1]])
			{
				int temp;
				temp=v[j+1];
				v[j+1]=v[j];
				v[j]=temp;	
			}
		}
	}
	
	for(int i=0;i<n;i++)
		cout<<v[i]<<"  ";
	
}


int main()
{
	vector<int> v1;
	
	v1.push_back(14);
	v1.push_back(19);
	v1.push_back(6);
	v1.push_back(31);
	v1.push_back(3);
	v1.push_back(45);
	v1.push_back(2);
	
	bubbleSort(v1);
}

