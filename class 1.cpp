#include<iostream>

using namespace std;

class Friend
{
	string name;
	int age;
	public:
	void set(string n,int a)
	{
		this->name=n;
		this->age=a;
	}
	
	Friend(string n,int a)
	{
		set(n,a);
	}
	
	void get()
	{
		cout<<"Name:-"<< this->name;
		cout<<"Age:-"<<this->age;
	}
};

int main()
{
	Friend f1("Pranav",21);
	Friend f2("Zayn",25);
	
	f1.get();
}
