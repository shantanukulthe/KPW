//Program to print Odd Numbers in Line
#include<stdio.h>
void ODDPrint(int iNo)
{
	int i=0;
	
	for(i=1;i<iNo;i++)
	{
		if((i%2)!=0)
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	ODDPrint(iValue);

	return 0;
}