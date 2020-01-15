//Program to print Numbers in Line
#include<stdio.h>
void Print(int iNo)
{
	int i=0;
	
	for(i=-iNo;i<=iNo;i++)
	{
		printf("%d\t",i);
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