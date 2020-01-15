//Application for hotel according to management team
//For Amount is < 500 : no discount
//for Amount is between 500-1500 : 10% discount
//for Amount is > 1500 : 15% discount
#include <stdio.h>
float CalculateBill(float iAmount)
{
	float Dis=0.0;
	if(iAmount<0)
	{
		printf("Invalid Amount");
		return -1;
	}

	if((iAmount>=0)&&(iAmount<=500))
	{
		return iAmount;
	}
	else if((iAmount>500)&&(iAmount<1500))
	{
		Dis=(iAmount*10)/100;
		return iAmount-Dis;
	}
	else if((iAmount>1500))
	{
		iAmount=(iAmount*15)/100;
		return iAmount-Dis;
	}
}
int main()
{
	float fValue=0.0;
	float fRet=0.0;

	printf("Enter Bill Amount : ");
	scanf("%f",&fValue);

	fRet=CalculateBill(fValue);
	printf("Your Bill Amount is : %f",fRet);
	return 0;
}


