//Program Display below pattern
//I/P:5
//O/P:* 1 * 2 * 3 * 4 * 5
#include<stdio.h>
void Pattern(int iNo)
{
	
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<=iNo;i++)
	{
		printf("*\t");
		printf("%d\t",i);
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
