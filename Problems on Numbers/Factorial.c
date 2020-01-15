//Program to find factorial of given number

#include<stdio.h>
int AddFact(int iNo)
{
	int i=0,iFact=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iFact=1;
	for(i=1;i<=iNo;i++)
	{
		iFact=iFact*i;
	}
	return iFact;
}
	
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=AddFact(iValue);
	printf("Factorial of Given Number is :%d",iRet);

	return 0;
}