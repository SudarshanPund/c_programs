#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count;
	
	printf("\n Enater a Number");
	scanf("%d",&num);
	
	printf(" \n Multiplication table for %d is",num);
	
	for(count=1;count<=10;count++)
	{
		printf("\n %d*%d=%d",num,count,(num*count));
	}
	getch();
}
