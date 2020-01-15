//Program Display below pattern
//I/P:5
//O/P:5 * 4 * 3 * 2 * 1 *
#include<stdio.h>
void Pattern(int iNo)
{
	
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=iNo;i>=1;i--)
	{
		printf("%d\t",i);
		printf("*\t");
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
