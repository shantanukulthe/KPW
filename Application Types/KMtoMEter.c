//Program to Convert KM to METER
#include<stdio.h>
int KMtoMETER(int iNo)
{
	int iMeter=0;

	iMeter=iNo*1000;

	return iMeter;
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter Distance in KM : ");
	scanf("%d",&iValue);

	iRet=KMtoMETER(iValue);

	return 0;
}