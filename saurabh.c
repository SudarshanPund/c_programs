#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	
	int i,num;
	float i1,sum=0;
	
	printf("\n Enter the numbers of symbol :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n Enter the number probability: %d:",i);
		scanf("%f",&i1);
		
		sum=sum+i1;
		
	} 
	{
		if(sum==1)
		{
			printf("\n The sum of the number is %f",sum);
		}
		else
		{
			printf("\n The Sum is %f is not equal to 1 So Please Enter proper number",sum);
		}
	}
return 0;
}
