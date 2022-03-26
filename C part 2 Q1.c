/* write a program to accept a three digit no from uesr and find out its sum using function 1st method */
#include<stdio.h>
#include<conio.h>
void main()
{
	void sumcal();
	sumcal();

}
void sumcal()
{
	int num,reminder,sum=0;
	printf("Enter the three digit number\n");
	scanf("%d",&num);
	if(num>=100&& num<=999)
	while(num!=0)
	{
		reminder=num%10;
		sum=sum+reminder;
		num=num/10;
		}
		else 
		{
		
printf("Please Enter three digit no only.\n\n\n");
	}
printf("Sum of the Given  digit is %d \n",sum);
}



