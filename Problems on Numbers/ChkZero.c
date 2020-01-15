//Program for Display Reverse Digit
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL ChkZero(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			break;
		}
		iNo=iNo/10;
	}
	if(iNo==0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	bRet=ChkZero(iValue);
	
	if(bRet==TRUE)
	{
		printf("Number contains Zero");
	}
	else
	{
		printf("Number doesn't contains Zero");
	}
	return 0;
}
