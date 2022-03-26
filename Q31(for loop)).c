#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count,fact=1;
	
	printf("\n Enater a Number");
	scanf("%d",&num);
	
	for(count=1;count<=num;count++)
	{
		fact=fact*count;
	
	}
	printf("\n factorial of %d is %d",num,fact);
	
	getch();
}

