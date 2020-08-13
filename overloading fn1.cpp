#include<iostream>

using namespace std;

class Area
{
	int radius,length,breadth;
	float ar;
	
	public:
	Area(int r)
	{
		this->radius=r;
		this->ar=3.14*float(r)*float(r);
	}
	
	Area(int l,int b)
	{
		this->length=l;
		this->breadth=b;
		this->ar=float(l)*b;
	}
	
	float getArea()
	{
		return this->ar;
	}
};

int main()
{
	Area circle(21);
	Area rectangle(12,25);
	
	cout<<"Circle Area:- "<<circle.getArea()<<endl;
	cout<<"Rectangle Area:- "<<rectangle.getArea();
}
