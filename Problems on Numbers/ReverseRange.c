//Program for Reverse range
#include<stdio.h>
void ReverseRange(int iStart,int iEnd)
{
	int i=0;
	
	for(i=iEnd;i>=iStart;i--)
	{
		printf("%d\t",i);
	}
	
}
int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Starting Range : ");
	scanf("%d",&iValue1);

	printf("Enter Ending Range : ");
	scanf("%d",&iValue2);

	ReverseRange(iValue1,iValue2);
	
	return 0;
}
