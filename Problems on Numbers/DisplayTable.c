//Program to Diplay Given Number Table

#include<stdio.h>
void DisplayTable(int iNo)
{
	int i=0,TValue=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	TValue=1;

	for(i=1;i<=10;i++)
	{
		TValue=iNo*i;
		printf("%d\t",TValue);
	}
	
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	DisplayTable(iValue);

	return 0;
}