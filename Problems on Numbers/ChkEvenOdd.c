//Program to check whether Number is even or Odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((iNo%2)==0)
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
 int iValue = 0;
 BOOL bRet = FALSE;

 printf("Enter Number : ");
 scanf("%d",&iValue);

 bRet = ChkEven(iValue);
 if(bRet==TRUE)
 {
	 printf("Number is Even");
 }
 else
 {
	 printf("Number is Odd");
 }
 return 0;
}