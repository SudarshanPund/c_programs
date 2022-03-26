#include<stdio.h>
#include<conio.h>
void main()
{
	int num,reminder,sum=0;
	
	printf(" \n Enter four digit number");
	scanf("%d",&num);
	
	if(num>=1000 && num<=9999)
	{
		while(num>0)
		{
		
		reminder=num%10;
		sum=sum+reminder;
		num=num/10;
	}
	printf("\n Sum of Four Digit is = %d",sum);
    }
	 else
	{
	printf("\n The Enrte nummber is not four digit number= %d",num);
    }
	getch();
}

