//Program to print the * And After #

#include<stdio.h>
void Print(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		
		printf("*\t");
	}
	for(i=1;i<=iNo;i++)
	{
		
		printf("#\t");
	}
	
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	Print(iValue);

	return 0;
}