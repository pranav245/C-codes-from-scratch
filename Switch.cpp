#include<stdio.h>

int meter(int KM)
{
	printf("%d",KM*1000);
}
float feet(int KM)
{
	printf("%.2f",float(KM)*3280.84); 
}
float miles(int KM)
{
	printf("%.2f",float(KM)*0.621);
}

int main()
{
	printf("Enter KMs:-");
	int km;
	scanf("%d",&km);
	int c;
	printf("Enter 1 to convert into Meter\nEnter 2 to convert into Feet\nEnter 3 to convert into Miles\n");
	printf("Enter your chioce:-");
	scanf("%d",&c);
	
	switch(c)
		{
		case 1:
			meter(km);
			break;
		case 2:
			feet(km);
			break;
		case 3:
			miles(km);
			break;
		default:
			printf("Not appropriate choice");
			break;
	}
	return 0;
}

