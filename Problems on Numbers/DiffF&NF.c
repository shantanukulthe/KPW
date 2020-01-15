//Program to find Difference between Summesion of all Factors And Non Factors
#include<stdio.h>
int DiffSumOddEven(int iNo)
{
	int i=0,iSumEven=0,iSumOdd=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<iNo;i++)
	{
		if((iNo%i)!=0)
		{
			iSumOdd=iSumOdd+i;
		}
		else
		{
			iSumEven=iSumEven+i;
		}
	}
	return iSumEven-iSumOdd;
	
}
int main()
{
	int iValue=0,iRet=0;
		

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=DiffSumOddEven(iValue);
	printf("Difference between Summetion of All Even And Odd Factors is : %d",iRet);

	return 0;
}