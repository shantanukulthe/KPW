//Program for Difference between Even and Odd Didgits
#include<stdio.h>

int DiffEvenOddDigit(int iNo)
{
	int iDigit=0,iCnt=0,iCnt1=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			iCnt1++;
		}
		else
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt1-iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=DiffEvenOddDigit(iValue);
	printf("Difference between Even And Odd Digits is : %d",iRet);

	return 0;
}
