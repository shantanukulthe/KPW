//Application School
#include<stdio.h>
int SchoolFees(int iStd)
{
	if((iStd<1)&&(iStd>4))
	{
		printf("Invalid Input");
		return -1;
	}
	if(iStd==1)
	{
		return 8900;
	}
	else if(iStd==2)
	{
		return 12790;
	}
	else if(iStd==3)
	{
		return 21000;
	}
	else if(iStd==4)
	{
		return 23450;
	}
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Standerd : ");
	scanf("%d",&iValue);

	iRet=SchoolFees(iValue);
	printf("Your School Fees is : %d",iRet);

	return 0;
}