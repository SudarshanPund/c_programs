#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1;
	char name[50];
	printf("\n Enter your name ");

scanf("%s",&name);
do
{
	printf("%s \n",name);
	
	n=n+1;
	
}
while(n<=5);
getch();
}
