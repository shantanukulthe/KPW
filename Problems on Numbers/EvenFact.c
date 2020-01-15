//Program to Calculate Multiplication of Even Factorial

#include<stdio.h>
int EvenFact(int iNo)
{
	int i=0,iFact=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iFact=1;
	for(i=1;i<=iNo;i++)
	{
		if((i%2)==0)
		{
			iFact=iFact*i;
			
		}
	}
	return iFact;
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet=EvenFact(iValue);
	printf("Multiplication of only Even Factorials of Given Number is : %d",iRet);
	
	return 0;
}