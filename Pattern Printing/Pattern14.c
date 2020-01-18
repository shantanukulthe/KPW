//Program to print Below Pattern
//iRow-4
//iCol-4
//Op-A B C D
//	 a b c d
//   A B C D
//   a b c d
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch1='\0',ch2='\0';
	for(i=1;i<=iRow;i++)
	{
		ch1='A',ch2='a';
		for(j=1;j<=iCol;j++)
		{
			if((i%2)!=0)
			{
				printf("%c\t",ch1);
				ch1++;
			}
			else
			{
				printf("%c\t",ch2);
				ch2++;
			}
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