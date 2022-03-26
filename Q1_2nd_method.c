#include<stdio.h>
#include<conio.h>
void main()
{
	void factcal(int,int,int);
	int num,count=1,fact;
	printf("Enter a number \n");
	scanf("%d",&num);
	factcal(num,count,fact);
	getch();

}
void factcal(int x1,int x2,int x3)

{
	int fact;
	while(x2<=x1)
	{
	
	fact=x3*x2;
	x2++;
}
printf("\n The factorial of %d is %d",num,fact);
}

