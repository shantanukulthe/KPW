//Print Even factors of given Number 
#include<stdio.h>
void DisplayEfactors(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		if((iNo%i)==0)
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

	DisplayEfactors(iValue);
	return 0;
}