//Program to print  to till acepted number
#include<stdio.h>
void Print(int iNo)
{
	int i=;

	for(i=1;i<=iNo;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number");
	scanf("%d",&iValue);

	Print(iValue);

	return 0;
}