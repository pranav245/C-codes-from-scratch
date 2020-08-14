#include<bits/stdc++.h>

using namespace std;


void selectionSort(vector<int> v)
{
	int min_i;
	int n=v.size();
	for(int i=0;i<n-1;i++)
	{
		min_i=i;
		
		for(int j=i+1;j<n;j++)
		{
			if(v[j]<v[min_i])
				min_i=j;
		}
		
		int temp;
		temp=v[min_i];
		v[min_i]=v[i];
		v[i]=temp;
		
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
	
	selectionSort(v1);
}

