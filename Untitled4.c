#include<stdio.h>
#include<conio.h>
void main()
{
void factcal(int,int,int);
int num,count=1,fact=1;
printf("Enter a number to find factorial \n");
 scanf("%d",&num);
 factcal(fact,count,num);
}
void factcal(int x1,int x2,int x3)
{
	while(x2<=x3)
	{
	
	int fact;
	fact=x1*x2;
	count++;
}
	 printf("\n Factorial of %d is %d",num,fact);
}

