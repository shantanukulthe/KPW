//Program to Convert Dollar into INR

#include<stdio.h>
int DollarToINR(int iNo)
{
	int iMult=70;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iMult=iMult*iNo;
	return iMult;
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Dollars : ");
	scanf("%d",&iValue);

	iRet=DollarToINR(iValue);
	printf("Your Indian Currency Value is : %d",iRet);
	
	return 0;
}