//Program to print Below Pattern
//iRow-3
//iCol-4
//Op-1  2  3  4
//	 5  6  7  8 
//   9 10 11 12
//   
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0,k=1;
	
	for(i=1;i<=iRow;i++)
	{
		
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",k);
			k++;
		}
		
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Number of rows : ");
	scanf("%d",&iValue1);

	printf("Enter Number of columns : ");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}