#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=1,fact;
	
	printf("\n Enater a Number");
	scanf("%d",&num);
	
	while(count<=num)
	{
		fact=fact*count;
		
		count++;
		
	}
	
	printf("\n Factorial of %d is %d",num,fact);
	
	getch();
}
