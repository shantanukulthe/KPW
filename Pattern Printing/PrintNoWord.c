//Program to Number in Word

#include<stdio.h>
void DisplayDnoFont(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((iNo>10)&&(iNo<0))
	{
		printf("Invalid Input");
	}
	if(iNo==0)
	{
		printf("Number is : Zero");
	}
	else if(iNo==1)
	{
		printf("Number is : One");
	}
	else if(iNo==2)
	{
		printf("Number is : Two");
	}
	else if(iNo==3)
	{
		printf("Number is : Three");
	}
	else if(iNo==4)
	{
		printf("Number is : Four");
	}
	else if(iNo==5)
	{
		printf("Number is : Five");
	}
	else if(iNo==6)
	{
		printf("Number is : Six");
	}
	else if(iNo==7)
	{
		printf("Number is : Seven");
	}
	else if(iNo==8)
	{
		printf("Number is : Eight");
	}
	else if(iNo==9)
	{
		printf("Number is : Nine");
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	DisplayDnoFont(iValue);

	return 0;
}