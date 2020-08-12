#include<stdio.h>
#include<conio.h>

int main()
{
	int a,total=0;
	float per;
	for(int i=0;i<5;i++)
	{
		printf("Subject %d: ",i+1);
		scanf("%d",&a);
		total=total+a;
	}
	
	per = (float(total)/5);
	
	printf("Percentage: %.2f",per);
	
	return 0;
}
