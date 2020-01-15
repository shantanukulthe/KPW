//Program to Diplay reverse table of Given Number 

#include<stdio.h>
void RevDisplayTable(int iNo)
{
	int i=0,TValue=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	TValue=1;

	for(i=10;i>=1;i--)
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

	RevDisplayTable(iValue);

	return 0;
}