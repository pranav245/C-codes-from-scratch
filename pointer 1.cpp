#include<iostream>

using namespace std;

int main()
{
	int x=10;
	int *ptr = &x;
	
	cout<<x<<endl;//10
	cout<<&x<<endl;//add
	cout<<ptr<<endl;//sameadd
	cout<<*ptr<<endl;//10
	cout<<&ptr<<endl;//ptr add
	cout<<*&x<<endl;//10
	cout<<&(*ptr)<<endl;//x add
	cout<<*(&ptr)<<endl;//x add
}
