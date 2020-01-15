//Print Even Numbers only given Number of times
#include<stdio.h>
void PrintEven(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		return;
	}

	for(i=2;i<=iNo*2;i+=2)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	PrintEven(iValue);
	return 0;
}