#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=1,fact;
	
	printf("\n Enater a Number");
	scanf("%d",&num);
	
	do
	{
		fact=fact*count;
		
		count++;
	}
	while(count<=num);
	
	printf("\n Factorial of %d is %d",num,fact);
	
	getch();
}
	
