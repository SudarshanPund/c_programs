#include<stdio.h>

void main()
{
    int num,reminder,sum=0;
    printf("Enter a interger number \n");
    scanf("%d,&num");

    while(num!=0)
    {
        reminder=num%10;
        sum=sum+reminder;
        num=num/10;
    }
    printf("\n sum of digit is %d",sum);
    getch();
}