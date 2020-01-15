//Convert Case of that character
#include<stdio.h>
void DisplayConvert(char ch)
{
	int i=0;
	if((ch>='A')&&(ch<='Z'))
	{
		printf("Converted Case is : %c",ch+32);
	}
	else
	{
		printf("Converted Case is : %c",ch-32);
	}

}
int main()
{
	char cValue=0;

	printf("Enter Character : ");
	scanf("%d",&cValue);

	DisplayConvert(cValue);
	return 0;
}