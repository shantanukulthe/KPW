//Check Vowels
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowels(char ch)
{
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
int main()
{
	char cValue=0;
	BOOL bRet=FALSE;

	printf("Enter Character : ");
	scanf("%d",&cValue);

	CheckVowels(cValue);

	if(bRet==TRUE)
	{
		printf("Given Character is vowel");
	}
	else
	{
		printf("Given Character is not vowel");
	}
	return 0;
}