//Program to print Below Pattern
//iRow-3
//iCol-5
//Op-A A A A A
//	 B B B B B
//   C C C C C
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);
			
		}
		ch++;
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