//Program to check given Numbers are EQual or Not 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	if(iNo1==iNo2)
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
	int iValue1=0,iValue2=0;
	BOOL bRet=FALSE;

	printf("Enter First Number : ");
	scanf("%d",&iValue1);

	printf("Enter Second Number : ");
	scanf("%d",&iValue2);
	
	bRet=ChkEqual(iValue1,iValue2);

	if(bRet==TRUE)
	{
		printf("The Numbers Are Equal");
	}
	else
	{
		printf("The Numbers are Not Equal");
	}

	return 0;
}