#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number:-");
	scanf("%d",&num);
	int nn,r,temp;
	temp=num;
	while(num>0)
	{
		r=num%10;
		nn=nn*10+r;
		num=num/10;
	}
	printf("%d",nn);
	(temp==nn)?printf("Palindrome"):printf("Not Palindrome");
}
