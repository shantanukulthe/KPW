//Program Display below pattern
//I/P:Rows 3 Columns 5
//O/P:5 4 3 2 1
//	  5 4 3 2 1
//	  5 4 3 2 1

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
		for(j=iCol;j>0;j--)
		{
			printf("%d\t",j);
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
