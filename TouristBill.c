/*We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after
100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
Input : 73	Output : 1825
Input : 132	Output : 2980
Input : 189	Output : 3835*/


#include<stdio.h>

int TouristBill(int iKilometer)
{
	int iBill=0;
	
	if(iKilometer<=0)
	{
		return -1;
	}

	if(iKilometer<=100)
	{
		iBill=iKilometer*25;
		return iBill;
	}
	else
	{
	
		iKilometer=iKilometer-100;
		iBill=2500+(iKilometer*15);
		return iBill;

	}
}

int main()
{
	int ikm=0;
	int iValue=0;

	printf("Enter the distance");
	scanf("%d",&ikm);

	iValue=TouristBill(ikm);

	printf("The Amount is %d",iValue);

	return 0;
}
