//Application for Income Tax Department
//
#include <stdio.h>
float CalculateBill(float iAmount)
{
	float Tax=0.0;
	if(iAmount<0)
	{
		printf("Invalid Amount");
		return -1;
	}

	if((iAmount>=0)&&(iAmount<500000))
	{
		return Tax;
	}
	else if((iAmount>=500000)&&(iAmount<1000000))
	{
		Tax=iAmount*10;
		return Tax;
	}
	else if((iAmount>=1000000)&&(iAmount<2000000))
	{
		Tax=iAmount*0.2;
		return Tax;
	}
	else if(iAmount>=2000000)
	{
		Tax=iAmount*0.3;
		return Tax;
	}
}
int main()
{
	float fValue=0.0;
	float fRet=0.0;

	printf("Enter Bill Amount : ");
	scanf("%f",&fValue);

	fRet=CalculateBill(fValue);
	printf("Your Tax Amount is : %f",fRet);
	
	return 0;
}


