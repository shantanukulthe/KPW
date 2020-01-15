//print hello on Condition
#include<stdio.h>
void Print(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo<10)
	{
		printf("Hello");
	}
	else
	{
		printf("demo");
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	Print(iValue);

	return 0;
}