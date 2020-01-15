//Program Display below pattern
//I/P:5
//O/P:ABCDE
#include<stdio.h>
void Pattern(int iNo)
{
	char ch='\0';
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	ch='A';
	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch);
		ch++;
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
