//Program Display below pattern
//I/P:Rows 4 Columns 4
//O/P:1 1 1 1
//    2 2 2 2
//    3 3 3 3
//    4 4 4 4

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	
	int i=0,j=0;
	if(iRow<0)
	{
		iRow=-iRow;
	}
	if(iCol<0)
	{
		iCol=-iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Number of Rows and Columns: ");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}
