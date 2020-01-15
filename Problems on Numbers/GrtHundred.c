//Program to check Number is greater than 100 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo<100)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	bRet=ChkGreater(iValue);

	if(bRet==TRUE)
	{
		printf("The given number is Smaller than 100");
	}
	else
	{
		printf("The given number is Greater than 100");
	}

	return 0;
}