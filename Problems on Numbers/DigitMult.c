//Program for Multiplication of all Digits
#include<stdio.h>

int DigitMult(int iNo)
{
	int iDigit=0,iMult=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iMult=1;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	return iMult;
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=DigitMult(iValue);
	printf("Digit Multiplication is : %d",iRet);

	return 0;
}
