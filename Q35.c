#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,n,large,pos;
	printf(" \n Enter the number of elements of arry");
	scanf("%d",&n);
	printf("\n Enter the aarry elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("%d",a[i]);
	large=a[0];
	pos=0;              
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
		pos=i;
		
		
	}
	printf("\n The largest no is %d and Its pos %d ",large,pos);
	
	getch();
}
