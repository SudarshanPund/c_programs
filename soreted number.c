#include <stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,t;
	
	
	printf("\n Enter 5 numbers");
	
	for(i=1;i<=4;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++);
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	 } 
	 printf("\n Soreted number are");
	 for(i=0;i<5;i++)
	 printf("%d ",a[i]);
	 return 0;
}  
