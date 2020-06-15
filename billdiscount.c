/*Design application for hotel. According to the management team of hotel they are giving
discount on total bill amount of customer.
If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500
and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have
to return the amount after applying discount.
Input : 1200  Output : 1080
Input : 290	Output : 290
Input : 3700	Output : 3145*/





#include<stdio.h>

float CalculateBill(int Amount)
{
	float fRet=0.0;

	if(Amount<=0)
	{
		return -1;
	}
	
	if((Amount>0)&&(Amount<500))
	{
		return Amount;
	}
	else if((Amount>=500)&&(Amount<1500))
	{	
		fRet=(Amount*0.1);
		fRet=Amount-fRet;
		return fRet;
	}
	else
	{
		fRet=(Amount*0.15);
		fRet=Amount-fRet;
		return fRet;
	}
}

int main()
{
	int Amount=0;
	float fAmount=0.0;

	printf("Enter the amount \n");
	scanf("%d",&Amount);

	fAmount=CalculateBill(Amount);

	printf("Amount after the discont is %f",fAmount);

	return 0;
}
