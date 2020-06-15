/*2. Design application for income tax department to calculate tax amount. According to the
income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.

Input:600000	Output:10000	(0 + 10000)
Input:450000	Output:0
Input:1200000	Output:90000	(0 + 50000 + 40000)
Input:8200000	Output:2110000	(0 + 50000 + 200000 + 1860000)*/


#include<stdio.h>

float IncomeTax(int iAmount)
{
	float fTax=0.0f;
	
	if(iAmount<0)
	{
		return -1;
	}
	if(iAmount<=500000)
	{
		return fTax;
	}
	else if((iAmount>500000)&&(iAmount<=1000000))
	{
		iAmount=iAmount-500000;
		fTax=iAmount*0.1;
		return fTax;
	}
	else if((iAmount>1000000)&&(iAmount<=2000000))
	{
		iAmount=iAmount-1000000;
		fTax=iAmount*0.2;
		fTax=50000+fTax;
		return fTax;
	}
	else 
	{
		iAmount=iAmount-2000000;
		fTax=iAmount*0.3;
		fTax=250000+fTax;
		return fTax;
	}
}

int main()
{
	int iAmount=0;
	float fValue=0.0f;
	
	printf("Enter the amount ");
	scanf("%d",&iAmount);

	fValue=IncomeTax(iAmount);
	
	printf("Enter the tax is %f",fValue);

	return 0;
}
