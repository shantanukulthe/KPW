//Program to Calculate Multiplication of Odd Factorial

#include<stdio.h>
int DiffEvenOddFact(int iNo)
{
	int i=0,iFactE=0,iFactO=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iFactE=1;
	iFactO=1;
	for(i=1;i<=iNo;i++)
	{
		if((i%2)!=0)
		{
			iFactO=iFactO*i;
		}
		else
		{
			iFactE=iFactE*i;
		}
	}
	return iFactE-iFactO;
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=DiffEvenOddFact(iValue);
	printf("Difference between Even And Odd Factorial is : %d",iRet);
	
	return 0;
}