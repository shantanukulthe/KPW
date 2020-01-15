//Program Display below pattern
//I/P:4
//O/P:# 1 * # 2 * # 3 * # 4 * 
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
		printf("#\t");
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
