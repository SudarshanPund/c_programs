#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,sum=0,sqr;
	while(n<=20)
{
	if(n%2==0)
{
	sqr=n*n;
	sum=sum+sqr;
	printf("\n %d %d %d",n,sqr,sum);	
}
n++;
}
getch();
}

