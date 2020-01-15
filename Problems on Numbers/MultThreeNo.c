//Program to Calculate Multiplication of Three Numbers
#include<stdio.h>
int ThreeMult(int iNo1,int iNo2,int iNo3)
{
	int iMult=1;
	
	iMult=iNo1*iNo2;
	iMult=iMult*iNo3;
	return iMult;

}
int main()
{
	int iValue1=0,iValue2=0,iValue3=0,iRet=0;

	printf("Enter Three Numbers for Multiplication : ");
	scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

	iRet=ThreeMult(iValue1,iValue2,iValue3);
	printf("Multiplication of three numbers is : %d",iRet);

	return 0;
}