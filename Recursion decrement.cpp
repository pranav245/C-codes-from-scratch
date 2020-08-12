#include<stdio.h>

int r(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	printf("%d",x);
	r(x--);
}

int main()
{
	int n=5;
	r(n);
	return 0;
}
