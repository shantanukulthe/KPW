//Program to myltiply the Factors
#include<stdio.h>
int FactMult(int iNo)
{
	int i=0,iMult=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iMult=1;
	for(i=1;i<iNo;i++)
	{
		if((iNo%i)==0)
		{
			iMult=iMult*i;
		}
	}
	return iMult;
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=FactMult(iValue);
	printf("Multiplication Of Factors is : %d",iRet);

	return 0;
}