//Program to print number of * on screen
#include<stdio.h>
void PrintStar(int iNo)
{
	int i=0;
	for (i=1;i<=iNo;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	PrintStar(iValue);
	return 0;
}


