#include<stdio.h>
#include<iostream>
int main()
{
	char *str="";
	do
	{
		printf("hello");
		printf("%s",typeof(str));
	}while(*str);
}
