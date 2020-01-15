//Program to Calculate Percentage
#include<stdio.h>
float Percentage(float fNo1,float fNo2)
{
	float fPer=0.0;
	if((fNo1<=0)||(fNo2<=0))
	{
		printf("Invalid input");
		return -1;
	}
	if(fNo2>fNo1)
	{
		printf("please check input");
		return -2;
	}

	fPer=(fNo2/fNo1);
	return fPer*100;
}
int main()
{
	float fValue1=0.0,fValue2=0.0,fRet=0.0;

	printf("Enter Total Marks : ");
	scanf("%f",&fValue1);

	printf("Enter Obtained Marks : ");
	scanf("%f",&fValue2);

	fRet=Percentage(fValue1,fValue2);
	printf("Percentage is :%f",fRet);
		
	return 0;
}
