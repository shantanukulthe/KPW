//Program for Summesion of Given range
#include<stdio.h>
int SumRange(int iStart,int iEnd)
{
	int i=0;
	int iSum=0;
	for(i=iStart;i<=iEnd;i++)
	{
		iSum=iSum+i;
	}
	return iSum;
}
int main()
{
	int iValue1=0,iValue2=0,iRet=0;

	printf("Enter Starting Range : ");
	scanf("%d",&iValue1);

	printf("Enter Ending Range : ");
	scanf("%d",&iValue2);

	iRet=SumRange(iValue1,iValue2);
	printf("Sum of your given range is %d",iRet);
	
	return 0;
}
