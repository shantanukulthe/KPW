//Program Display below pattern
//I/P:8
//O/P:2 4 6 8 10 12 14 16 
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
		printf("%d\t",i*2);
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
