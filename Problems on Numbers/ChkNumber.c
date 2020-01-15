//Program to Check Number 
//if iNo<50 - Small
//if iNo>=50&iNo<100 -Medium
//if iNo>=100 - Large
#include<stdio.h>
void ChkNumber(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo<50)
	{
		printf("Number is Small");
	}
	else if((iNo>=50)&&(iNo<100))
	{
		printf("Number is Medium");
	}
	else if(iNo>=100)
	{
		printf("Number is Large");
	}
}


int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	ChkNumber(iValue);

	return 0;
}