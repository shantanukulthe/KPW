//Program to write first five Multiples of Given Number
#include<stdio.h>
void FiveMultiples(int iNo)
{
	int i=0,iMult=1;
	
	for(i=1;i<=5;i++)
	{
		iMult=i*iNo;
		printf("%d\t",iMult);
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	FiveMultiples(iValue);

	return 0;
}