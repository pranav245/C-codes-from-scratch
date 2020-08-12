#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number:- ");
	scanf("%d",&n);
	int temp=n;
	int flag=0;
	while(n>0){
		if(n%2==0)
			n=n/2;
		else
			{
				if(n==1)
				{
					flag=0;
					break;
				}
			flag=99;
			break;
		}
	}
	(flag==0 && temp!=1)?printf("True"):printf("Flase");	
}
