//Program to ptint the Factors in Decreasing Order
#include<stdio.h>
void DecFact(int iNo)
{
	int i=0,iMin=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iMin=iNo;
	for(i=iNo;i>0;i--)
	{
		if((iNo%i)==0)
		{
			if(i<iMin)
			{
				printf("%d\t",i);
			}
		}
	}
	
}
int main()
{
	int iValue=0;
		

	printf("Enter Number : ");
	scanf("%d",&iValue);

	DecFact(iValue);
	

	return 0;
}