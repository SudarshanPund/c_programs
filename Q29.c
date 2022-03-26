#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,sum=0,avg;
	
	do
	{
		if(n%2!=0)
	{
		printf("\n ODD Number=%d",n);
		
		sum=sum+n;
		
	}
	n++;
	}
	while(n<=20);		
	avg=sum/10;
	printf(" \n Sum of all ODD Numbers = %d",sum);
	printf("\n Average of all ODD Numbers= %d",avg);
	
	getch();
	
}
