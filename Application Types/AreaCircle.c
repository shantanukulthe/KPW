//Program to Calculate Area of Circle
#include<stdio.h>
double CircleArea(float fRadius)
{
	double Area=0.0;
	float fPi=3.14;

	Area=fPi*(fRadius*fRadius);
	return Area;

}
int main()
{
	float fValue=0.0;
	double dRet=0.0;

	printf("Enter Number : ");
	scanf("%f",&fValue);

	dRet=CircleArea(fValue);
	printf("Area of Circle is : %ld",dRet);
	
	return 0;
}