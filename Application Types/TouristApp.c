//Application for tourist Company
//if Km is < 100 then rate is 25 rupees/km
//if Km is > 100 then rate is 15 rupees/km
#include<stdio.h>
int TouristBill(int iKm)
{
	int iAmount=0;
	if(iKm<0)
	{
		printf("Invalid Input");
		return -1;
	}
	if((iKm>0)&&(iKm<100))
	{
		iAmount=iKm*25;
		return iAmount;
	}
	else 
	{
		iAmount=iKm*15;
		return iAmount;
	}
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Kilometers : ");
	scanf("%d",&iValue);

	iRet=TouristBill(iValue);
	printf("Your Bill is : %d",iRet);

	return 0;
}
