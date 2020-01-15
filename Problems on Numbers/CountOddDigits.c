//Program for Count Frequency of Odd Didgits
#include<stdio.h>

int CountOddDigitFreq(int iNo)
{
	int iDigit=0,iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=CountOddDigitFreq(iValue);
	printf("Number of Count of Odd Digit is : %d",iRet);

	return 0;
}
