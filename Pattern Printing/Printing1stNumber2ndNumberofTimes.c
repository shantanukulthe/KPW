//printing number on 2nd number of times
#include<stdio.h>
void Print(int iNo,int iFreq)
{
	int i=0;

	for(i=0;i<iFreq;i++)
	{
		printf("%d\t",iNo);
	}
	
}
int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Number that you want to print : ");
	scanf("%d",&iValue1);

	printf("Enter Number of times that you want to print 1st Number : ");
	scanf("%d",&iValue2);

	Print(iValue1,iValue2);

	return 0;
}