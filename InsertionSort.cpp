#include<bits/stdc++.h>

using namespace std;


void insertionSort(vector<int> v)
{
	int i,j,key;
	int n=v.size();
	for(int i=1;i<n;i++)
	{
		key=v[i];
		j=i-1;
		
		while(j>=0 && v[j]>key)
		{
			v[j+1]=v[j];
			j-=1;
		}
		v[j+1]=key;
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
	
	insertionSort(v1);
}

